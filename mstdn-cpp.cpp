#include <mastodon-cpp/mastodon-cpp.hpp>
#include "rice/Class.hpp"
#include "rice/String.hpp"

using namespace Rice;

Object mstdn_toot(const std::string& domain, const std::string& token) {
    String str("Toot");

    Mastodon::API masto(domain.c_str(), token.c_str());

    Mastodon::parameters parameters = {
        { "status", { "test" } },
        { "visibility", { "unlisted" } }
    };
    masto.post(Mastodon::API::v1::statuses, parameters);

    return str;
}
