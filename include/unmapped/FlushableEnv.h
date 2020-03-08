#pragma once



class FlushableEnv : leveldb::EnvWrapper {

public:
    FlushableEnv::~FlushableEnv()

    FlushableEnv(leveldb::Env *);
};
