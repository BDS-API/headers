#pragma once



class DBStorageConfig {

public:
    ~DBStorageConfig();
    DBStorageConfig(DBStorageConfig &&);
    DBStorageConfig(Scheduler &, Core::Path const&);
};
