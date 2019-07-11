#include <fdb/common.hpp>
#include <fdb/network.hpp>
#include <fdb/fdb_c.h>

namespace fdb {
  network::network() {
    fdb_check(fdb_select_api_version(FDB_API_VERSION));
    fdb_setup_network();
  }
}
