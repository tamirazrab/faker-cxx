#include "faker-cxx/Computer.h"

#include <string_view>

#include "ComputerData.h"
#include "faker-cxx/Helper.h"

namespace faker
{
std::string_view Computer::type()
{
    return Helper::arrayElement(data::ComputerTypes);
}

std::string_view Computer::manufacture()
{
    return Helper::arrayElement(data::ComputerManufactures);
}

std::string_view Computer::model()
{
    return Helper::arrayElement(data::ComputerModels);
}

std::string_view Computer::cpuManufacture()
{
    return Helper::arrayElement(data::ComputerCPUManufactures);
}

std::string_view Computer::cpuType()
{
    return Helper::arrayElement(data::ComputerCPUTypes);
}

std::string_view Computer::cpuModel()
{
    return Helper::arrayElement(data::ComputerCPUModels);
}

std::string_view Computer::gpuManufacture()
{
    return Helper::arrayElement(data::ComputerGPUManufactures);
}

std::string_view Computer::gpuType()
{
    return Helper::arrayElement(data::ComputerGPUTypes);
}

std::string_view Computer::gpuModel()
{
    return Helper::arrayElement(data::ComputerGPUModels);
}
}
