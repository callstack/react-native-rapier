#pragma once

#include <ReactCommon/TurboModule.h>
#include <RNReactNativeRapierSpecJSI.h>
#include "gen/rapier3d.h"

struct w2c_wbg {
  w2c_rapier__wasm3d__bg* root;
  facebook::jsi::Runtime& rt;
  facebook::jsi::Object importObj;
};

namespace facebook::react {

using namespace facebook;

class RapierModuleContext: public jsi::NativeState {
public:
  RapierModuleContext(jsi::Runtime& rt, jsi::Object&& importObject)
  : importObject(std::move(importObject)), wbg(&ctx, rt, this->importObject.getPropertyAsObject(rt, "wbg")) {}
  
  jsi::Object importObject;
  w2c_rapier__wasm3d__bg ctx;
  w2c_wbg wbg;
};

class ReactNativeRapier : public NativeReactNativeRapierCxxSpecJSI {
public:
  explicit ReactNativeRapier(std::shared_ptr<CallInvoker> jsInvoker);

public:
  jsi::Object create(jsi::Runtime &rt, jsi::Object importObject) override;
  constexpr static auto kModuleName = "ReactNativeRapier";

private:
  std::shared_ptr<CallInvoker> _callInvoker;
};

} // namespace facebook::react
