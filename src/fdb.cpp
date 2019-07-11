#include <fdb/common.hpp>
#include <fdb/fdb.hpp>

namespace fdb
{
  database::ptr api::open()
  {
    return std::make_shared(new database());
  }
  database::ptr open(const std::string& cluster_cfg)
  {
    return std::make_shared(new database(cluster_cfg));
  }
  
}
