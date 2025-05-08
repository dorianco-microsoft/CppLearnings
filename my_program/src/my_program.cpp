#include <iostream>

#include "mydynlib.h"

int main(int argc, char *argv[])
{
  auto args{mydynlib::parse_args(argc, argv)};

  for (const auto& [key, value] : args) 
  {
    std::cout << key << ": " << value << std::endl;
  }
  
  return 0;
}