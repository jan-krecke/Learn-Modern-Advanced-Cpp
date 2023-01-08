#include <string>

class URL {
 public:
  URL(const std::string& protocol, const std::string& location_);
  std::string display();

 private:
  std::string protocol_;
  std::string location_;
};