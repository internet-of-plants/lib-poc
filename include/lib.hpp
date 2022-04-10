#ifndef LIB_HPP
#define LIB_HPP

#ifndef ARDUINOJSON_ENABLE_ARDUINO_STRING
#error "Must define ARDUINOJSON disable"
#endif
#include <ArduinoJson.h>

namespace example {
auto makeEmptyJson() const noexcept -> std::unique_ptr<StaticJsonDocument<128>> {
  auto doc = std::unique_ptr<StaticJsonDocument<128>>(new (std::nothrow) StaticJsonDocument<128>());
  if (!doc) return nullptr;
  doc->clear();
  return doc;
}
}
#endif
