#pragma once

#include "../bedrock/Scheduler.h"
#include "../core/Path.h"


class DBStorageConfig {

public:
    ~DBStorageConfig();
    DBStorageConfig(DBStorageConfig &&);
    DBStorageConfig(Scheduler &, Core::Path const&);
};
