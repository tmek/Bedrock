add_executable(bedrock_tests test_main.cpp)
target_link_libraries(bedrock_tests PRIVATE bedrock GTest::gtest_main)
add_test(NAME BedrockTests COMMAND bedrock_tests)