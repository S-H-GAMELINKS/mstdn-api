#include <unordered_map>
#include <string>
#include <mastodon-cpp/mastodon-cpp.hpp>
#include "mstdn-cpp.hpp"

Mstdn::Mstdn() {}

Mstdn::Mstdn(const std::string& domain, const std::string& token) {
    this->keys.emplace("domain", domain);
    this->keys.emplace("token", token);
}

std::string Mstdn::mstdn_toot(const std::string& message) {
    Mastodon::API masto(this->keys["domain"].c_str(), this->keys["token"].c_str());

    Mastodon::parameters parameters = {
        { "status", { message.c_str() } },
        { "visibility", { "public" } }
    };
    masto.post(Mastodon::API::v1::statuses, parameters); 

    return message;
}
