#include <fortrend/core/engine_info.h>

#include <gtest/gtest.h>

TEST(EngineInfoTests, ReturnsExpectedEngineName)
{
    EXPECT_EQ(fortrend::getEngineName(), "Fortrend Engine");
}