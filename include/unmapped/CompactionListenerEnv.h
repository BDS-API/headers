#pragma once

#include <functional>


class CompactionListenerEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    virtual ~CompactionListenerEnv();
//  virtual void Schedule(void ((void *), , void *); //TODO: incomplete function definition

//  CompactionListenerEnv(leveldb::Env *); //TODO: incomplete function definition
//  void setCompactionCallback(std::function<void (CompactionStatus)>); //TODO: incomplete function definition
    void notifyStart();
    void notifyComplete();
};
