#include <iostream>
#include <fdb/fdb.hpp>

int
main(int argc, char** argv)
{
  
  std::cout << "Init api" << std::endl;
  fdb::api api;
  std::cout << "Creating db" << std::endl;
  fdb::database::ptr db = api.open();  
  
  return 0;
}
