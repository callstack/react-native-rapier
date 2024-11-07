//
//  jsi-exports-bridge.h
//  Pods
//
//  Created by Robert Pasiński on 05/11/2024.
//
#pragma once

#include "gen/rapier3d.h"
#include <jsi/jsi.h>

struct w2c_wbg {
  w2c_rapier__wasm3d__bg* root;
  facebook::jsi::Runtime& rt;
  facebook::jsi::Object importObj;
};

namespace facebook::react {

class RapierModuleContext: public jsi::NativeState {
public:
  RapierModuleContext(jsi::Runtime& rt, jsi::Object&& importObject)
  : importObject(std::move(importObject)), wbg(&ctx, rt, this->importObject.getPropertyAsObject(rt, "wbg")) {}
  
  jsi::Object importObject;
  w2c_rapier__wasm3d__bg ctx;
  w2c_wbg wbg;
};

}
