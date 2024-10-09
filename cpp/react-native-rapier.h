#pragma once

#include <ReactCommon/TurboModule.h>
#include <RNReactNativeRapierSpecJSI.h>

namespace facebook::react {

using namespace facebook;

class ReactNativeRapier : public NativeReactNativeRapierCxxSpecJSI {
public:
  explicit ReactNativeRapier(std::shared_ptr<CallInvoker> jsInvoker);

public:
  double multiply(jsi::Runtime &rt, double a, double b) override;
  constexpr static auto kModuleName = "ReactNativeRapier";

private:
  std::shared_ptr<CallInvoker> _callInvoker;
};

} // namespace facebook::react
