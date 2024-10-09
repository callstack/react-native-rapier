#include "react-native-rapier.h"

namespace facebook::react {

ReactNativeRapier::ReactNativeRapier(std::shared_ptr<CallInvoker> jsInvoker)
: NativeReactNativeRapierCxxSpecJSI(jsInvoker), _callInvoker(jsInvoker) {}

double ReactNativeRapier::multiply(jsi::Runtime &rt, double a, double b) {
  return a * b;
}

}
