#pragma once

#include <memory>
#include "FlushableEnv.h"


class FlushableStorageAreaEnv : public FlushableEnv {

public:
    virtual ~FlushableStorageAreaEnv(); // _ZN23FlushableStorageAreaEnvD2Ev
    virtual void __fake_function0(); // fake
    virtual void flushToPermanentStorage(); // _ZN23FlushableStorageAreaEnv23flushToPermanentStorageEv
//    FlushableStorageAreaEnv(long *, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition // _ZN23FlushableStorageAreaEnvC2EPN7leveldb3EnvESt10shared_ptrIN4Core15FileStorageAreaEE
    void _flushStorageArea(); // _ZN23FlushableStorageAreaEnv17_flushStorageAreaEv
};
