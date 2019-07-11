#pragma once

#include <fdb/database.hpp>

namespace fdb {
  class api {
  public:
    typedef std::unique_ptr<api> ptr;
    
    database::ptr open();
    database::ptr open(const std::string& cluster_cfg);

    
    
  };
}
