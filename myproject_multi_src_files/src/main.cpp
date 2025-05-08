#include "modules/logger/logger.h"
#include "modules/fs/fs.h"

using namespace myapp::modules;

int main(int argc, char *argv[])
{
  logger::log_info("Hello, World!");
  fs::write_file("test.txt", "This is a test file.");

  return 0;
}