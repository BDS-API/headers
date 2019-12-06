#pragma once

class FlushableEnv : leveldb::EnvWrapper {

public:
    virtual ~FlushableEnv();

    void FlushableEnv(leveldb::Env *);
};
