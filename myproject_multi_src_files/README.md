# My App with multiple source files
This is a simple C++ project that demonstrates how to compile and run a basic program with multiple source files.

## Compiling
This project is a C++ application composed of multiple source files. To compile the project, you can use the following command:
```bash
mkdir out -p && \
g++ \
  $(find src/ -name "*.cpp") \  
  -o out/myapp \  
  -std=c++17
```

## Running
After compiling, you can run the application with the following command:
```
./out/myapp
```