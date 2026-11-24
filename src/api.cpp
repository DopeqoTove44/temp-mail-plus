// api.cpp — part of temp-mail-plus.

#include "tempmailplus/api.h"

#include <cstdio>

namespace tempmailplus {

Api::Api(const std::string& config_path)
    : config_path_(config_path) {}

void Api::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Api::run() {
    if (verbose_) std::fprintf(stderr, "[temp-mail-plus] api: run\n");
    // core logic lives here
    return true;
}

}  // namespace tempmailplus
