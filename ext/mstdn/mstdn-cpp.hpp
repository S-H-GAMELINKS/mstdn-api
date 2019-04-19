#ifndef _MSTDN_CPP_
#define _MSTDN_CPP_

#include <unordered_map>
#include <string>
#include <mastodon-cpp/mastodon-cpp.hpp>

class Mstdn {
        std::unordered_map<std::string, std::string> keys;
    public:
        Mstdn();
        Mstdn(const std::string& domain, const std::string& token);
        std::string mstdn_toot(const std::string& message);
};

#endif