#pragma once

#include <string>

class HelloWorld final
{
  public:
    explicit HelloWorld(const char*) noexcept;

    void show() const noexcept;

    ~HelloWorld() noexcept;
  private:
    std::string __username;
};
