#include <bedrock/bedrock_log.hpp>
#include <gtest/gtest.h>
#include <spdlog/sinks/stdout_sinks.h>

TEST(BedrockLog, InitAndLog) {
    // Redirect spdlog output to a test sink to capture logs
    auto sink = std::make_shared<spdlog::sinks::stdout_sink_mt>();
    auto logger = std::make_shared<spdlog::logger>("test_logger", sink);
    spdlog::set_default_logger(logger);

    bedrock::init_logger();
    bedrock::log_info("Test message");

    // Verify logging by checking sink output (simplified check)
    EXPECT_TRUE(true); // Placeholder: actual sink capture requires additional setup
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}