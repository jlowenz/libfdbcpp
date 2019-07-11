#pragma once
#include <memory>

namespace fdb {

  /** The network class represents the network event loop for the FDB
      client library. According to the docs, there must be one event
      loop per process. Seems like an unnecessary limitation of the C
      API. 
   **/
  class network_;
  typedef std::shared_ptr<network_> network;

  namespace net {
    enum option {
      TRACE_ENABLE,
      TRACE_ROLL_SIZE,
      TRACE_MAX_LOGS_SIZE,
      DISABLE_CLIENT_STATISTICS_LOGGING,
      ENABLE_SLOW_TASK_PROFILING
    };
  }
  
  /**
     Ensure the network is created and return it. This function is idempotent.
   */
  network get_network();

  
  bool set_network_option(network net, net::option opt, const std::string& value);
  bool set_network_option(network net, net::option opt, long value);
}
