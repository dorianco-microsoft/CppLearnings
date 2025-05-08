#include <string>
#include <iostream>
#include <fstream>

#include "fs.h"

namespace myapp::modules::fs 
{
  void write_file(std::string filename, std::string contents)
  {
    std::ofstream file_to_write(filename);

    if (!file_to_write.is_open()) 
    {
      return; // cannot open file
    }

    file_to_write << contents;    

    file_to_write.close();
  }
}