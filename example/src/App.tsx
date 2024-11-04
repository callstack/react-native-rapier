import { useState, useEffect, useCallback } from 'react';
import { StyleSheet, View, Text, Button } from 'react-native';
import Rapier from '@callstack/react-native-rapier';

export default function App() {
  const [module, setModule] = useState<any | undefined>();

  useEffect(() => {
    setModule(Rapier.create({ wbg: {} }));
  }, []);

  const callFn = useCallback(() => {
    console.log(module, module.exports);
    let res = module.exports.rawimpulsejointset_new();
    console.log('res: ', res);
  }, [module]);

  return (
    <View style={styles.container}>
      <Text>Module loaded: {!!module}</Text>
      {!!module && <Text>{JSON.stringify(module)}</Text>}
      {!!module && <Button title="Call" onPress={callFn} />}
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
