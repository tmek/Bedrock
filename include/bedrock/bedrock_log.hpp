#pragma once
#include <spdlog/spdlog.h>

namespace bedrock {
/// \file bedrock_log.hpp
/// \brief Simple logging utility using spdlog.
inline void init_logger() {
    spdlog::set_level(spdlog::level::info);
    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");
}

inline void log_info(const std::string& message) {
    spdlog::info(message);
}
}