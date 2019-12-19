#pragma once

using namespace DBStorage;

class Config {

public:

    Config(Scheduler &, Core::Path const&);
    Config(DBStorage::Config&&);
};
