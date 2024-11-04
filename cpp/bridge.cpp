#include "gen/rapier3d.h"
#include <jsi/jsi.h>
#include <ReactCommon/TurboModule.h>

using namespace facebook::react;
using namespace facebook;

#ifdef __cplusplus
extern "C" {
#endif

struct w2c_wbg {
  w2c_rapier__wasm3d__bg* root;
  jsi::Runtime& rt;
  jsi::Object importObj;
};

/* import: 'wbg' '__wbg_bind_4d857b598695205e' */
u32 w2c_wbg_0x5F_wbg_bind_4d857b598695205e(w2c_wbg* ctx, u32 a, u32 b, u32 c, u32 d) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_bind_4d857b598695205e");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  auto $d = jsi::Value { (double)d };
  return fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c), std::move($d)}).asNumber();
}

/* import: 'wbg' '__wbg_buffer_12d079cc21e14bdb' */
u32 w2c_wbg_0x5F_wbg_buffer_12d079cc21e14bdb(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_buffer_12d079cc21e14bdb");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbg_call_8e7cb608789c2528' */
u32 w2c_wbg_0x5F_wbg_call_8e7cb608789c2528(struct w2c_wbg* ctx, u32 a, u32 b, u32 c, u32 d) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_call_8e7cb608789c2528");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  auto $d = jsi::Value { (double)d };
  return fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c), std::move($d)}).asNumber();
}

/* import: 'wbg' '__wbg_call_938992c832f74314' */
u32 w2c_wbg_0x5F_wbg_call_938992c832f74314(struct w2c_wbg* ctx, u32 a, u32 b, u32 c, u32 d, u32 e) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_call_938992c832f74314");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  auto $d = jsi::Value { (double)d };
  auto $e = jsi::Value { (double)e };
  return fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c), std::move($d), std::move($e)}).asNumber();
}

/* import: 'wbg' '__wbg_call_b3ca7c6051f9bec1' */
u32 w2c_wbg_0x5F_wbg_call_b3ca7c6051f9bec1(struct w2c_wbg* ctx, u32 a, u32 b, u32 c) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_call_b3ca7c6051f9bec1");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  return fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c)}).asNumber();
}

/* import: 'wbg' '__wbg_length_c20a40f15020d68a' */
u32 w2c_wbg_0x5F_wbg_length_c20a40f15020d68a(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_length_c20a40f15020d68a");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbg_length_d25bbcbc3367f684' */
u32 w2c_wbg_0x5F_wbg_length_d25bbcbc3367f684(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_length_d25bbcbc3367f684");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbg_new_63b92bc8671ed464' */
u32 w2c_wbg_0x5F_wbg_new_63b92bc8671ed464(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_new_63b92bc8671ed464");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbg_newwithbyteoffsetandlength_4a659d079a1650e0' */
u32 w2c_wbg_0x5F_wbg_newwithbyteoffsetandlength_4a659d079a1650e0(struct w2c_wbg* ctx, u32 a, u32 b, u32 c) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_newwithbyteoffsetandlength_4a659d079a1650e0");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  return fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c)}).asNumber();
}

/* import: 'wbg' '__wbg_newwithbyteoffsetandlength_aa4a17c33a06e5cb' */
u32 w2c_wbg_0x5F_wbg_newwithbyteoffsetandlength_aa4a17c33a06e5cb(struct w2c_wbg* ctx, u32 a, u32 b, u32 c) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_newwithbyteoffsetandlength_aa4a17c33a06e5cb");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  return fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c)}).asNumber();
}

/* import: 'wbg' '__wbg_newwithlength_1e8b839a06de01c5' */
u32 w2c_wbg_0x5F_wbg_newwithlength_1e8b839a06de01c5(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_newwithlength_1e8b839a06de01c5");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbg_rawcontactforceevent_new' */
u32 w2c_wbg_0x5F_wbg_rawcontactforceevent_new(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_rawcontactforceevent_new");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbg_rawraycolliderintersection_new' */
u32 w2c_wbg_0x5F_wbg_rawraycolliderintersection_new(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_rawraycolliderintersection_new");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbg_set_a47bac70306a19a7' */
void w2c_wbg_0x5F_wbg_set_a47bac70306a19a7(struct w2c_wbg* ctx, u32 a, u32 b, u32 c) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_set_a47bac70306a19a7");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c)});
}

/* import: 'wbg' '__wbg_set_bd975934d1b1fddb' */
void w2c_wbg_0x5F_wbg_set_bd975934d1b1fddb(struct w2c_wbg* ctx, u32 a, u32 b, u32 c) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbg_set_bd975934d1b1fddb");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  auto $c = jsi::Value { (double)c };
  fn.call(ctx->rt, {std::move($a), std::move($b), std::move($c)});
}

/* import: 'wbg' '__wbindgen_boolean_get' */
u32 w2c_wbg_0x5F_wbindgen_boolean_get(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbindgen_boolean_get");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbindgen_is_function' */
u32 w2c_wbg_0x5F_wbindgen_is_function(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbindgen_is_function");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbindgen_memory' */
u32 w2c_wbg_0x5F_wbindgen_memory(struct w2c_wbg* ctx) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbindgen_memory");
  return fn.call(ctx->rt, {}).asNumber();
}

/* import: 'wbg' '__wbindgen_number_get' */
void w2c_wbg_0x5F_wbindgen_number_get(struct w2c_wbg* ctx, u32 a, u32 b) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbindgen_number_get");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  fn.call(ctx->rt, {std::move($a), std::move($b)});
}

/* import: 'wbg' '__wbindgen_number_new' */
u32 w2c_wbg_0x5F_wbindgen_number_new(struct w2c_wbg* ctx, f64 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbindgen_number_new");
  auto $a = jsi::Value { (double)a };
  return fn.call(ctx->rt, {std::move($a)}).asNumber();
}

/* import: 'wbg' '__wbindgen_object_drop_ref' */
void w2c_wbg_0x5F_wbindgen_object_drop_ref(struct w2c_wbg* ctx, u32 a) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbindgen_object_drop_ref");
  auto $a = jsi::Value { (double)a };
  fn.call(ctx->rt, {std::move($a)});
}

/* import: 'wbg' '__wbindgen_throw' */
void w2c_wbg_0x5F_wbindgen_throw(struct w2c_wbg* ctx, u32 a, u32 b) {
  auto fn = ctx->importObj.getPropertyAsFunction(ctx->rt, "__wbindgen_throw");
  auto $a = jsi::Value { (double)a };
  auto $b = jsi::Value { (double)b };
  fn.call(ctx->rt, {std::move($a), std::move($b)});
}


#ifdef __cplusplus
}
#endif

