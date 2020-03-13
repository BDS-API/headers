#pragma once

#include <functional>


class CompactionListenerEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    ~CompactionListenerEnv(); // _ZN21CompactionListenerEnvD2Ev
//  virtual void Schedule(void ((void *), , void *); //TODO: incomplete function definition // _ZN21CompactionListenerEnv8ScheduleEPFvPvES0_
//  CompactionListenerEnv(leveldb::Env *); //TODO: incomplete function definition // _ZN21CompactionListenerEnvC2EPN7leveldb3EnvE
    void setCompactionCallback(std::function<void (CompactionStatus)>); // _ZN21CompactionListenerEnv21setCompactionCallbackESt8functionIFv16CompactionStatusEE
    void notifyStart(); // _ZN21CompactionListenerEnv11notifyStartEv
    void notifyComplete(); // _ZN21CompactionListenerEnv14notifyCompleteEv
};
