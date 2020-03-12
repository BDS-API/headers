#pragma once

#include <memory>
#include "FlushableEnv.h"


class FlushableStorageAreaEnv : FlushableEnv {

public:
    ~FlushableStorageAreaEnv();
    virtual void flushToPermanentStorage();
//  FlushableStorageAreaEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
    void _flushStorageArea();
};
