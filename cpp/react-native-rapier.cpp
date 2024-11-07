#include "react-native-rapier.h"
#include "macros.h"
#include "wasm-rt.h"
#include "jsi-exports-bridge.h"

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
  return createRapierExports(rt, std::move(importObject));
}

}
