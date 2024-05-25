#include "faker-cxx/Computer.h"

#include <algorithm>
#include <string_view>
#include <vector>

#include "gtest/gtest.h"

#include "computer/ComputerData.h"

using namespace ::testing;
using namespace faker;
class ComputerTest : public Test
{
};

TEST_F(ComputerTest, ComputerTypeGeneration)
{
    std::string_view generatedType = Computer::type();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerTypes.begin(), faker::data::ComputerTypes.end(),
                                    [generatedType](const std::string_view& type) { return type == generatedType; }));
}

TEST_F(ComputerTest, ComputerManufactureGeneration)
{
    std::string_view generatedManufacture = Computer::manufacture();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerManufactures.begin(), faker::data::ComputerManufactures.end(),
                                    [generatedManufacture](const std::string_view& manufacture)
                                    { return manufacture == generatedManufacture; }));
}

TEST_F(ComputerTest, ComputerModelGeneration)
{
    std::string_view generatedModel = Computer::model();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerModels.begin(), faker::data::ComputerModels.end(),
                                    [generatedModel](const std::string_view& model) { return model == generatedModel; }));
}

TEST_F(ComputerTest, ComputerCPUManufactureGeneration)
{
    std::string_view generatedCPUManufacture = Computer::cpuManufacture();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerCPUManufactures.begin(),
                                    faker::data::ComputerCPUManufactures.end(),
                                    [generatedCPUManufacture](const std::string_view& cpuManufacture)
                                    { return cpuManufacture == generatedCPUManufacture; }));
}

TEST_F(ComputerTest, ComputerCPUTypeGeneration)
{
    std::string_view generatedCPUType = Computer::cpuType();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerCPUTypes.begin(), faker::data::ComputerCPUTypes.end(),
                                    [generatedCPUType](const std::string_view& cpuType)
                                    { return cpuType == generatedCPUType; }));
}

TEST_F(ComputerTest, ComputerCPUModelGeneration)
{
    std::string_view generatedCPUModel = Computer::cpuModel();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerCPUModels.begin(), faker::data::ComputerCPUModels.end(),
                                    [generatedCPUModel](const std::string_view& cpuModel)
                                    { return cpuModel == generatedCPUModel; }));
}

TEST_F(ComputerTest, ComputerGPUManufactureGeneration)
{
    std::string_view generatedGPUManufacture = Computer::gpuManufacture();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerGPUManufactures.begin(),
                                    faker::data::ComputerGPUManufactures.end(),
                                    [generatedGPUManufacture](const std::string_view& gpuManufacture)
                                    { return gpuManufacture == generatedGPUManufacture; }));
}

TEST_F(ComputerTest, ComputerGPUTypeGeneration)
{
    std::string_view generatedGPUType = Computer::gpuType();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerGPUTypes.begin(), faker::data::ComputerGPUTypes.end(),
                                    [generatedGPUType](const std::string_view& gpuType)
                                    { return gpuType == generatedGPUType; }));
}

TEST_F(ComputerTest, ComputerGPUModelGeneration)
{
    std::string_view generatedGPUModel = Computer::gpuModel();
    ASSERT_TRUE(std::ranges::any_of(faker::data::ComputerGPUModels.begin(), faker::data::ComputerGPUModels.end(),
                                    [generatedGPUModel](const std::string_view& gpuModel)
                                    { return gpuModel == generatedGPUModel; }));
}
