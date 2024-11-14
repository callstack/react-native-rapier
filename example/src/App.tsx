import { useEffect, useCallback } from 'react';
import { StyleSheet, View, Text, Button } from 'react-native';
import 'text-encoding-polyfill'; // Required for `rapier3d-compat`
import RAPIER, {
  World,
  ColliderDesc,
  RigidBodyDesc,
} from '@dimforge/rapier3d-compat';

export default function App() {
  useEffect(() => {
    async function loadModule() {
      RAPIER.init();
    }
    loadModule();
  }, []);

  const worldSimulation = useCallback(() => {
    const gravity = { x: 0.0, y: -9.81, z: 0.0 };
    const world = new World(gravity);

    // Create a ground plane
    const groundColliderDesc = ColliderDesc.cuboid(10.0, 0.1, 10.0);
    world.createCollider(groundColliderDesc);

    // Create a dynamic rigid-body with a cube collider
    const rigidBodyDesc = RigidBodyDesc.dynamic().setTranslation(0.0, 5.0, 0.0);
    const rigidBody = world.createRigidBody(rigidBodyDesc);

    const colliderDesc = ColliderDesc.cuboid(0.5, 0.5, 0.5);
    world.createCollider(colliderDesc, rigidBody);

    // Simulation loop
    const timeStep = 1 / 60;
    function simulate() {
      world.step();

      // Get the position of the cube
      const position = rigidBody.translation();
      console.log(
        `Cube position: x=${position.x.toFixed(2)}, y=${position.y.toFixed(2)}, z=${position.z.toFixed(2)}`
      );

      // Continue simulation if cube is above ground
      if (position.y > 0.5) {
        setTimeout(() => simulate(), timeStep * 1000);
      }
    }

    // Start the simulation
    simulate();
  }, []);

  return (
    <View style={styles.container}>
      <Text>Module loaded: {!!module}</Text>
      <Button title="Run simulation" onPress={worldSimulation} />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});
