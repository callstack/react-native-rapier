#ifdef __cplusplus
#import "callstack-react-native-rapier.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNReactNativeRapierSpec.h"

@interface ReactNativeRapier : NSObject <NativeReactNativeRapierSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ReactNativeRapier : NSObject <RCTBridgeModule>
#endif

@end
