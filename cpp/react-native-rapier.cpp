#include "react-native-rapier.h"
#include "macros.h"


namespace callstack {
namespace react_native_rapier {
void install(jsi::Runtime& rt) {
  auto multiply = HOSTFN("multiply", 2) {
    auto num1 = args[0].asNumber();
    auto num2 = args[1].asNumber();
    return jsi::Value(num1 + num2);
  });

  auto rapier = jsi::Object { rt };
  rapier.setProperty(rt, "multiply", std::move(multiply));

  rt.global().setProperty(rt, "__RapierProxy", std::move(rapier));
}
}
}

