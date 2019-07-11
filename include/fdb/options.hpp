#pragma once

#include <cstdint>

namespace fdb {

  struct options {
    options();
    ~options();

    // Tracing options
    bool set_trace_enable(const std::string& path);
    bool set_trace_enable();
    bool set_trace_roll_size(uint64_t size);
    bool set_trace_max_logs_size(uint64_t size);
    bool set_trace_format_xml();
    bool set_trace_format_json();
  };

}
