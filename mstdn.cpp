#include <string>
#include <mastodon-cpp/mastodon-cpp.hpp>
#include "rice/Class.hpp"
#include "rice/String.hpp"
#include "mstdn-cpp.hpp"

using namespace Rice;

extern "C" {
    void Init_mstdn() {
        Class rb_cMstdn = define_class("Mstdn")
            .define_method("toot", &mstdn_toot, (Arg("domain"), Arg("token")));
    }
}
