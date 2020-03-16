#pragma once

#include <functional>


class CompactionListenerEnv /*public leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    virtual ~CompactionListenerEnv(); // _ZN21CompactionListenerEnvD2Ev
    virtual void __fake_function0(); // fake
    virtual void Schedule__incomplete0(void (long *), long, void *); //TODO: incomplete function definition // _ZN21CompactionListenerEnv8ScheduleEPFvPvES0_
//    CompactionListenerEnv(long *); //TODO: incomplete function definition // _ZN21CompactionListenerEnvC2EPN7leveldb3EnvE
    void setCompactionCallback(std::function<void (long)>); // _ZN21CompactionListenerEnv21setCompactionCallbackESt8functionIFv16CompactionStatusEE
    void notifyStart(); // _ZN21CompactionListenerEnv11notifyStartEv
    void notifyComplete(); // _ZN21CompactionListenerEnv14notifyCompleteEv
};
