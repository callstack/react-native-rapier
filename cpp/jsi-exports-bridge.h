//
//  jsi-exports-bridge.h
//  Pods
//
//  Created by Robert Pasiński on 05/11/2024.
//
#pragma once
#include "jsi-imports-bridge.h"

namespace facebook::react {

jsi::Object createRapierExports(jsi::Runtime &rt, jsi::Object importObject);

};
