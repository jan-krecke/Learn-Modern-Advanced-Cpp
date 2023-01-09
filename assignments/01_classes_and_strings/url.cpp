#include "url.hpp"

URL::URL(const std::string& protocol, const std::string& resource)
    : protocol_{protocol}, resource_{resource} {}

URL::URL(const URL& other)
    : protocol_{other.protocol_}, resource_{other.resource_} {}

const std::string URL::display() { return protocol_ + "://" + resource_; }