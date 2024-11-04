import type { TurboModule } from 'react-native';
import { TurboModuleRegistry } from 'react-native';
import type { UnsafeObject } from 'react-native/Libraries/Types/CodegenTypes';

export interface Spec extends TurboModule {
  create(importObject: UnsafeObject): UnsafeObject;
}

export default TurboModuleRegistry.getEnforcing<Spec>('ReactNativeRapier');
