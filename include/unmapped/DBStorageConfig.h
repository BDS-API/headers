#pragma once

#include "../bedrock/Scheduler"
#include "../core/Path"


class DBStorageConfig {

public:

    DBStorageConfig(Scheduler &, Core::Path const&);
    DBStorageConfig(DBStorageConfig&&);
};
