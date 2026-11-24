// api — part of temp-mail-plus.

#pragma once

#include <string>
#include <vector>

namespace tempmailplus {

class Api {
public:
    explicit Api(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace tempmailplus
