#pragma once

#include <memory>

namespace fdb {

  class api;
  
  class database {
    friend class api;
  protected:
    database();
    explicit database(const std::string& cluster_cfg);
  public:
    typedef std::unique_ptr<database> ptr;
    
    ~database();
    
  private:
    
  };
  
}
