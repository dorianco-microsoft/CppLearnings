# My Dynamic Library

This is a simple dynamic library written in C++.

## Build Instructions

To build the library, run the following command:

```bash
mkdir lib -p && \
g++ \
  $(find src/ -name "*.cpp") \
  -o lib/libmydynlib.so \
  -Iinclude \
  -std=c++17 \
  -fPIC \
  -shared
```

## Usage

To use the library, include the header file and link against the library:

```cpp
#include <iostream>

#include "mydynlib/mydynlib.h"

int main(int argc, char *argv[])
{
  auto args{mydynlib::parse_args(argc, argv)};

  for (const auto& [key, value] : args) 
  {
    std::cout << key << ": " << value << std::endl;
  }
  
  return 0;
}
```


## Linking the Library

To link the library, use the following command:

```bash
g++ my_program.cpp           \  
  -o my_program              \
  -std=c++17                 \
  -I/home/dorianco/mydynlib/include  \
  -L/home/dorianco/mydynlib/lib  \
  -lmydynlib
```
