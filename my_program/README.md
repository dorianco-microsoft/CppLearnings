# My Program
This is a simple program using custom defined library

## Build Instructions
To build the program, run the following command:

```bash
mkdir out -p && \
g++ \
  $(find src/ -name "*.cpp") \  
  -o out/my_program \  
  -std=c++17 \  
  -I/home/dorianco/mydynlib/include \  
  -L/home/dorianco/mydynlib/lib \  
  -lmydynlib
```

## Usage 
To call the program, use the following example:

```bash
LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/home/dorianco/mydynlib/lib" \
./out/my_program \
  -name Dorian \
  -age 26
```

