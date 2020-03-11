#pragma once

#include "./FlushableEnv.h"
#include "../core/FileStorageArea.h"
#include <memory>


class FlushableStorageAreaEnv : FlushableEnv {

public:
    virtual ~FlushableStorageAreaEnv();
    virtual void flushToPermanentStorage();

//  FlushableStorageAreaEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
    void _flushStorageArea();
};
