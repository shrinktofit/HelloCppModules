#include <string>

export module org.foo;

import org.bar;

export namespace lyx {
  class Foo {
  public:
    Bar bar;
  };

  std::u8string f() {
    return {};
  }
}