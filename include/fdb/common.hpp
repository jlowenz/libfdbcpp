#pragma once

#define FDB_API_VERSION 610

#include <iostream>
#include <stdexcept>
#include <foundationdb/fdb_c.h>

namespace fdb {

  struct exception : std::runtime_error {
    using std::runtime_error::runtime_error;
  };
  
  inline bool fdb_check(fdb_error_t code)
  {
    // do sth
    if (code != 0) {
      std::string err(fdb_get_error(code));
      std::cout << "ERROR: " << err << std::endl;
      return false;
    }
    return true;
  }

  
}
