#pragma once

#include "FlushableEnv.h"
#include <memory>


class FlushableStorageAreaEnv : FlushableEnv {

public:
    ~FlushableStorageAreaEnv(); // _ZN23FlushableStorageAreaEnvD2Ev
    virtual void flushToPermanentStorage(); // _ZN23FlushableStorageAreaEnv23flushToPermanentStorageEv
//  FlushableStorageAreaEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition // _ZN23FlushableStorageAreaEnvC2EPN7leveldb3EnvESt10shared_ptrIN4Core15FileStorageAreaEE
    void _flushStorageArea(); // _ZN23FlushableStorageAreaEnv17_flushStorageAreaEv
};
