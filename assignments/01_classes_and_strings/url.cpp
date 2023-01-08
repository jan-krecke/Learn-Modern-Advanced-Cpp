#include "url.hpp"

URL::URL(const std::string& protocol, const std::string& location)
    : protocol_(protocol), location_(location) {}

std::string URL::display() { return protocol_ + "//" + location_; }