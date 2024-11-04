#include "react-native-rapier.h"
#include "macros.h"
#include "wasm-rt.h"

namespace facebook::react {

std::shared_ptr<RapierModuleContext> tryGetRapierContext(jsi::Runtime& rt, const jsi::Object& rapierObject) {
  if (!rapierObject.hasNativeState(rt)) {
    return nullptr;
  }

  auto context = std::dynamic_pointer_cast<RapierModuleContext>(rapierObject.getNativeState(rt));
  return context;
}

ReactNativeRapier::ReactNativeRapier(std::shared_ptr<CallInvoker> jsInvoker)
: NativeReactNativeRapierCxxSpecJSI(jsInvoker), _callInvoker(jsInvoker) {}

jsi::Object ReactNativeRapier::create(jsi::Runtime &rt, jsi::Object importObject) {
  jsi::Object mod { rt };
  
  if (!wasm_rt_is_initialized()) {
    wasm_rt_init();
  }
  
  auto inst = std::make_shared<RapierModuleContext>(rt, std::move(importObject));
  wasm2c_rapier__wasm3d__bg_instantiate(&inst->ctx, &inst->wbg);
    
  mod.setNativeState(rt, inst);
  
  // Fill Exports
  jsi::Object exports {rt};
  
  /* export: 'rawimpulsejointset_new' */
  exports.setProperty(rt, "rawimpulsejointset_new", HOSTFN("rawimpulsejointset_new", 0) {
    auto nativeState = tryGetRapierContext(rt, thisValue.getObject(rt));
    auto res = w2c_rapier__wasm3d__bg_rawimpulsejointset_new(&nativeState->ctx);
    return jsi::Value { (double)res };
  }));
  u32 w2c_rapier__wasm3d__bg_rawimpulsejointset_new(w2c_rapier__wasm3d__bg*);
  
  exports.setNativeState(rt, inst);
  mod.setProperty(rt, "exports", std::move(exports));
  
  // end full exports
  return mod;
}

}
