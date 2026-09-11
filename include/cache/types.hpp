#pragma once
#include <string>
#include <chrono>
#include <optional>
#include <memory>

namespace cache {

enum class EvictionPolicy {
    LRU,
    LFU,
    FIFO
};

struct CacheItem {
    std::string key;
    std::string value;
    std::chrono::system_clock::time_point created_at;
    std::chrono::system_clock::time_point expires_at;
    uint64_t access_count = 0;
};

} // namespace cache

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions

// Model expansions
