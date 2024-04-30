#pragma once
#include <iostream>

int myabs(const int value)
{
  if (value < 0) {
    std::cout << "value is negative" << std::endl;
    return -value;
  } else {
    std::cout << "value is positive" << std::endl;
  }

  return value;
}
