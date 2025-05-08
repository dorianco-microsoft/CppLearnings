#include <string>
#include <iostream>

#include "logger.h"

namespace myapp::modules::logger 
{
  void log_info(std::string msg)
  {
    std::cout << "INFO: " << msg << std::endl;
  }
}