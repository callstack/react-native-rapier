import { NativeModules, Platform } from 'react-native';

const LINKING_ERROR =
  `The package '@callstack/react-native-rapier' doesn't seem to be linked. Make sure: \n\n` +
  Platform.select({ ios: "- You have run 'pod install'\n", default: '' }) +
  '- You rebuilt the app after installing the package\n' +
  '- You are not using Expo Go\n';

// @ts-expect-error
const isTurboModuleEnabled = global.__turboModuleProxy != null;

const ReactNativeRapierModule = isTurboModuleEnabled
  ? require('./NativeReactNativeRapier').default
  : NativeModules.ReactNativeRapier;

ReactNativeRapierModule
  ? ReactNativeRapierModule
  : new Proxy(
      {},
      {
        get() {
          throw new Error(LINKING_ERROR);
        },
      }
    );

declare global {
  var __RapierProxy: object | undefined;
}

if (global.__RapierProxy == null) {
  throw new Error(LINKING_ERROR);
}

const proxy = global.__RapierProxy;
// Type cast this to Rapier types
const Rapier = proxy as any;

export default Rapier;
