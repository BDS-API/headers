#pragma once



class CompactionListenerEnv : leveldb::EnvWrapper {

public:
    CompactionListenerEnv::~CompactionListenerEnv()
    virtual void Schedule(void ()((void *), , void *);

    CompactionListenerEnv(leveldb::Env *);
    void setCompactionCallback(std::function<void ()(CompactionStatus)>);
    void notifyStart();
    void notifyComplete();
};
