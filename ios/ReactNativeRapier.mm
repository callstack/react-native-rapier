#import "ReactNativeRapier.h"
#include <ReactCommon/CxxTurboModuleUtils.h>

@implementation ReactNativeRapier

+ (void)load {
  facebook::react::registerCxxModuleToGlobalModuleMap(
  std::string(facebook::react::ReactNativeRapier::kModuleName),
  [&](std::shared_ptr<facebook::react::CallInvoker> jsInvoker) {
  return std::make_shared<facebook::react::ReactNativeRapier>(jsInvoker);
});
}

@end
