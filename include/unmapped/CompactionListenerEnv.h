#pragma once

#include <functional>


class CompactionListenerEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    ~CompactionListenerEnv();
//  virtual void Schedule(void ((void *), , void *); //TODO: incomplete function definition
    void notifyStart();
    void notifyComplete();
    void setCompactionCallback(std::function<void (CompactionStatus)>);
//  CompactionListenerEnv(leveldb::Env *); //TODO: incomplete function definition
};
