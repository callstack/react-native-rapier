#ifndef macros_h
#define macros_h

#define HOSTFN(name, argCount)         \
jsi::Function::createFromHostFunction( \
rt, \
jsi::PropNameID::forAscii(rt, name), \
argCount, \
[=](jsi::Runtime &rt, const jsi::Value &thisValue, const jsi::Value *args, size_t count) -> jsi::Value

#endif /* macros_h */
