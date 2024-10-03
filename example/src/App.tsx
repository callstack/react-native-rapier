import { useState, useEffect } from 'react';
import { StyleSheet, View, Text } from 'react-native';
import Rapier from '@callstack/react-native-rapier';

export default function App() {
  const [result, setResult] = useState<number | undefined>();

  useEffect(() => {
    setResult(Rapier.multiply(3, 7));
  }, []);

  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
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
