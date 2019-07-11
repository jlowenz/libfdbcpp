#include <fdb/fdb.hpp>

int
main(int argc, char** argv)
{
  fdb::api api;
  fdb::database::ptr db = api.open();
  
  return 0;
}
