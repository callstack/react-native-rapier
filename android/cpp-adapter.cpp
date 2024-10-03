#include <jni.h>
#include "callstack-react-native-rapier.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_callstack_reactnativerapier_ReactNativeRapierModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return callstack_reactnativerapier::multiply(a, b);
}
