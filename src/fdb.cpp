#include <memory>
#include <fdb/common.hpp>
#include <fdb/fdb.hpp>
#include <fdb/network.hpp>
#include <fdb/aixlog.hpp>


namespace fdb
{
  api::api()
  {
    AixLog::Log::init({std::make_shared<
          AixLog::SinkCout>(AixLog::Severity::trace,
                            AixLog::Type::normal,
                            "FDB: %Y-%m-%d %H-%M-%S.#ms [#severity] (#tag) #message")});
    get_network();
  }

  api::~api()
  {
  }
  
  database::ptr api::open()
  {
    database::ptr db(new database);
    return db;
  }
  database::ptr api::open(const std::string& cluster_cfg)
  {
    database::ptr db(new database(cluster_cfg));
    return db;
  }
  
}
