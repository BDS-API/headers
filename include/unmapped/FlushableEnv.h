#pragma once



class FlushableEnv : leveldb::EnvWrapper {

public:
    virtual FlushableEnv::~FlushableEnv()

    FlushableEnv(leveldb::Env *);
};
