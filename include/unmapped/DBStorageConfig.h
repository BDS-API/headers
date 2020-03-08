#pragma once



class DBStorageConfig {

public:

    DBStorageConfig(Scheduler &, Core::Path const&);
    DBStorageConfig(DBStorageConfig&&);
};
