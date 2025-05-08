#include <map>
#include <string>

#include "mydynlib.h"

namespace mydynlib
{
  std::map<std::string, std::string> parse_args(int argc, char *argv[])
  {
    // init an empty map of string keys with string values
    std::map<std::string, std::string> args_map;

    for (int index = 1; index < argc; ++index)
    {
      std::string arg_flag = argv[index];

      // if the arg does not start with '-' is not a flag
      if (arg_flag[0] != '-') continue;

      std::string flag_key = arg_flag.substr(1); // remove the leading '-' from the flag
      args_map[flag_key] = ""; // add the flag to the map with an empty value
  
      // check the next arg for the value of the flag
      int flag_value_index{index + 1};

      // if the next arg is out of bounds, continue
      if(flag_value_index >= argc) continue;

      // if a next arg is availble get value
      std::string arg_flag_value{argv[flag_value_index]};

      // if next arg value starts with '-' it is another flag, so continue
      if (arg_flag_value[0] == '-') continue;

      // if next arg value didn't start with '-' it is the value for the flag
      args_map[flag_key] = arg_flag_value;
    }

    return args_map;
  }
}