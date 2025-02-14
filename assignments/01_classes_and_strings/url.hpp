#ifndef URL_HEADER
#define URL_HEADER

#include <string>

class URL {
 public:
  URL(const std::string& protocol, const std::string& resource);
  URL(const URL& other);
  const std::string display();

 private:
  std::string protocol_;
  std::string resource_;
};

#endif  // URL_HEADER