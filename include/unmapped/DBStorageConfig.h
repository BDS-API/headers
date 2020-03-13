#pragma once



class DBStorageConfig {

public:
    DBStorageConfig(Scheduler &, Core::Path const&); // _ZN15DBStorageConfigC2ER9SchedulerRKN4Core4PathE
    ~DBStorageConfig(); // _ZN15DBStorageConfigD2Ev
    DBStorageConfig(DBStorageConfig &&); // _ZN15DBStorageConfigC2EOS_
};
