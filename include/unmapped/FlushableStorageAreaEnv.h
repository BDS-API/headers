#pragma once



class FlushableStorageAreaEnv : FlushableEnv {

public:
    virtual FlushableStorageAreaEnv::~FlushableStorageAreaEnv();
    virtual void flushToPermanentStorage(void);

    FlushableStorageAreaEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>);
    void _flushStorageArea(void);
};
