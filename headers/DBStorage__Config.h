#pragma once

class DBStorage::Config {

public:

    void Config(Scheduler &, Core::Path const&);
    void Config(DBStorage::Config&&);
};
