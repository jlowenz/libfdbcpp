#include <fdb/common.hpp>
#include <fdb/options.hpp>
#include <fdb/network.hpp>

namespace fdb {
  
  options::options()
  {
    get_network();
  }

  options::~options()
  {
  }

  bool
  options::set_trace_enable(const std::string& path)
  {
    return false;
  }
  bool
  options::set_trace_enable()
  {
    return false;
  }
  bool
  options::set_trace_roll_size(uint64_t size)
  {
    return false;
  }
  bool
  options::set_trace_max_logs_size(uint64_t size)
  {
    return false;
  }
  bool
  options::set_trace_format_xml()
  {
    return false;
  }
  bool
  options::set_trace_format_json()
  {
    return false;
  }
  
}
