#include "std/core.hpp"

auto main(const int, char**) -> int
{
  std::array a{ 1, 2, 3, 4 };
  
  for (const auto& e: a) {
    std::cout << e << '\n';
  }
}
