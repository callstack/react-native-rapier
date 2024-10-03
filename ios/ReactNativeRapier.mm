#import "ReactNativeRapier.h"
#import <ReactCommon/RCTTurboModuleWithJSIBindings.h>


@interface ReactNativeRapier () <RCTTurboModuleWithJSIBindings>
@end

@implementation ReactNativeRapier

RCT_EXPORT_MODULE()

#pragma mark - RCTTurboModuleWithJSIBindings

- (void)installJSIBindingsWithRuntime:(facebook::jsi::Runtime &)runtime
{
  callstack::react_native_rapier::install(runtime);
}

// Don't compile this code when we build for the old architecture.
#ifdef RCT_NEW_ARCH_ENABLED
- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
(const facebook::react::ObjCTurboModule::InitParams &)params
{
  return std::make_shared<facebook::react::NativeReactNativeRapierSpecJSI>(params);
}
#endif

@end
