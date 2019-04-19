#include <string>
#include <mastodon-cpp/mastodon-cpp.hpp>
#include "rice/Data_Type.hpp"
#include "rice/Constructor.hpp"
#include "mstdn-cpp.hpp"

extern "C" {
    void Init_mstdn() {
        Rice::Data_Type<Mstdn> rb_cMstdn = Rice::define_class<Mstdn>("Mstdn")
            .define_constructor(Rice::Constructor<Mstdn, const std::string&, const std::string&>(), (Rice::Arg("domain"), Rice::Arg("token")))
            .define_method("toot", &Mstdn::mstdn_toot, Rice::Arg("message"));
    }
}
