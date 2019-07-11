#include <fdb/common.hpp>
#include <fdb/network.hpp>

namespace fdb {
  network::network() {
    if (!fdb_check(fdb_select_api_version(FDB_API_VERSION))) {
      throw fdb::exception("Failed to select API");
    }
    if (!fdb_check(fdb_setup_network())) {
      throw fdb::exception("Could not start FDB processing thread");
    }    
  }

  network::~network() {
    
  }
}
