#pragma once

#include "../core/FileStorageArea"


class FlushableStorageAreaEnv : FlushableEnv {

public:
    FlushableStorageAreaEnv::~FlushableStorageAreaEnv()
    virtual void flushToPermanentStorage();

    FlushableStorageAreaEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>);
    void _flushStorageArea();
};
