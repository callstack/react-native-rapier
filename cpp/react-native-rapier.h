#pragma once

#include "jsi-imports-bridge.h"
#include <ReactCommon/TurboModule.h>
#include <RNReactNativeRapierSpecJSI.h>

namespace facebook::react {

using namespace facebook;

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
