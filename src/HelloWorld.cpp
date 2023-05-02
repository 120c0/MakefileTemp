#include "HelloWorld.hpp"

#include <iostream>

HelloWorld::HelloWorld(const char *username) noexcept
  : __username(username)
{
}

void HelloWorld::show() const noexcept
{
  std::cout << "Hello, " << this->__username << '\n';
}

HelloWorld::~HelloWorld() noexcept
{
}