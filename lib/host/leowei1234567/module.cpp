// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "host/leowei1234567/module.h"

#include "host/leowei1234567/func.h"

namespace WasmEdge {
namespace Host {

/// Register your functions in module.
HostFuncExampleModule::HostFuncExampleModule():Runtime::Instance::ModuleInstance("host_function_example") {
  addHostFunc("host_function_example_set_class_id",
              std::make_unique<HostFuncExampleSetClassID>(Env));
  addHostFunc("host_function_example_add_student",
              std::make_unique<HostFuncExampleAddStudent>(Env));
  addHostFunc("host_function_example_set_class_name",
              std::make_unique<HostFuncExampleSetClassName>(Env));
  addHostFunc("host_function_example_set_class_level",
              std::make_unique<HostFuncExampleSetClassLevel>(Env));
  addHostFunc("host_function_example_print",
              std::make_unique<HostFuncExamplePrint>(Env));
}

} // namespace Host
} // namespace WasmEdge