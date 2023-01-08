#include "url.hpp"

URL::URL(const std::string& protocol, const std::string& resource)
    : protocol_(protocol), resource_(resource) {}

std::string URL::display() { return protocol_ + "://" + resource_; }