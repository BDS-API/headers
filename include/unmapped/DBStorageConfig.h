#pragma once

#include "../core/Path.h"
#include "../bedrock/Scheduler.h"
#include "./DBStorageConfig.h"


class DBStorageConfig {

public:

    DBStorageConfig(Scheduler &, Core::Path const&);
    ~DBStorageConfig();
    DBStorageConfig(DBStorageConfig &&);
};
