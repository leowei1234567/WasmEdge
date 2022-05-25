// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "host/leowei1234567/env.h"
// #include "runtime/importobj.h" <-- this file is gone in the latest head
// refer to Breaking changes 0.10.0-alpha.2 (2022-05-20)
#include "runtime/instance/module.h"

#include <cstdint>

namespace WasmEdge {
namespace Host {

class HostFuncExampleModule : public Runtime::Instance::ModuleInstance { // <-- use ModuleInstance instead of ImportObj
public:
  HostFuncExampleModule();

  HostFuncExampleEnvironment &getEnv() { return Env; }
  // error: member initializer 'ModuleInstance' does not name a non-static data member or base class
  const HostFuncExampleEnvironment &getEnv() const noexcept { return Env; }

private:
  HostFuncExampleEnvironment Env;
};

} // namespace Host
} // namespace WasmEdge