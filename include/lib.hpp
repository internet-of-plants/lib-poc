#ifndef LIB_HPP
#define LIB_HPP

#ifndef ARDUINOJSON_ENABLE_ARDUINO_STRING
#error "Must define ARDUINOJSON disable"
#endif
#include <ArduinoJson.h>

namespace example {
auto makeEmptyJson() const noexcept -> StaticJsonDocument<128> {
  auto doc = StaticJsonDocument<128>();
  doc.clear();
  return doc;
}
}
#endif
