#pragma once

class FlushableStorageAreaEnv : FlushableEnv {

public:
    virtual ~FlushableStorageAreaEnv();
    virtual void flushToPermanentStorage(void);

    void FlushableStorageAreaEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>);
    void _flushStorageArea(void);
};
