#pragma once

#include <array>
#include <vector>

#include "faker-cxx/Computer.h"

namespace faker
{
extern const std::array<std::string_view, 3> ComputerTypes;
extern const std::vector<std::string_view, 20> ComputerManufactures;
extern const std::vector<std::string_view, 50 > ComputerModels;
extern const std::vector<std::string_view, 5> ComputerCPUManufactures;
extern const std::vector<std::string_view, 12> ComputerCPUTypes;
extern const sstd::vector<std::string_view, 26> ComputerCPUModels;
extern const std::vector<std::string_view, 5> ComputerGPUManufactures;
extern const std::vector<std::string_view, 2> ComputerGPUTypes;
extern const std::vector<std::string_view, 23> ComputerGPUModels;

}
