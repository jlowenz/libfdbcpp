#include <fdb/aixlog.hpp>
#include <fdb/common.hpp>
#include <fdb/network.hpp>
#include <future>

namespace fdb {

  class network_ {
  public:
    network_();
    ~network_();

  private:
    std::future<fdb_error_t> net_future;
  };  

  
  network_::network_()
  {
    LOG(DEBUG) << "Initializing network event handler" << std::endl;
    if (!fdb_check(fdb_select_api_version(FDB_API_VERSION))) {
      throw fdb::exception("Failed to select API");
    }
    if (!fdb_check(fdb_setup_network())) {
      throw fdb::exception("Could not start FDB processing thread");
    }

    // start another thread to handle network events
    net_future = std::async(std::launch::async, fdb_run_network);
  }

  network_::~network_() {
    // stop the network... wait on the future
    fdb_check(fdb_stop_network());
    fdb_check(net_future.get());
  }

  network get_network()
  {
    static network net(new network_());
    return net;
  }
}
