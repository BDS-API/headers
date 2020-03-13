#pragma once

#include <string>
#include <optional>
#include "ITaskExecutionContext.h"
#include <memory>


class BackgroundWorker : ITaskExecutionContext {

public:
    static long gLocalWorkerMappingSingleton;

    ~BackgroundWorker(); // _ZN16BackgroundWorkerD2Ev
    virtual bool isAsync()const; // _ZNK16BackgroundWorker7isAsyncEv
    virtual bool canTaskRunAgain()const; // _ZNK16BackgroundWorker15canTaskRunAgainEv
    void getCurrentTask(); // _ZN16BackgroundWorker14getCurrentTaskEv
//  BackgroundWorker(std::string, bool, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, WorkerPool &, bool); //TODO: incomplete function definition // _ZN16BackgroundWorkerC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbRKN7Bedrock9Threading16OSThreadPriorityESt8optionalImER10WorkerPoolb
    void wake(); // _ZN16BackgroundWorker4wakeEv
    void _hasAvailableWork()const; // _ZNK16BackgroundWorker17_hasAvailableWorkEv
    void queue(std::shared_ptr<BackgroundTask>); // _ZN16BackgroundWorker5queueESt10shared_ptrI14BackgroundTaskE
    void _assignWorkerToThisThread(); // _ZN16BackgroundWorker25_assignWorkerToThisThreadEv
    void start(); // _ZN16BackgroundWorker5startEv
    void _setCoreAffinity(); // _ZN16BackgroundWorker16_setCoreAffinityEv
    void _setOSPriority(); // _ZN16BackgroundWorker14_setOSPriorityEv
    void _doNoWorkDelay(); // _ZN16BackgroundWorker14_doNoWorkDelayEv
    void _sleepTimeoutElapsed()const; // _ZNK16BackgroundWorker20_sleepTimeoutElapsedEv
    void _workerThread()const; // _ZNK16BackgroundWorker13_workerThreadEv
    bool processTaskSync(); // _ZN16BackgroundWorker15processTaskSyncEv
    void _processNextTask(); // _ZN16BackgroundWorker16_processNextTaskEv
    void _tryPop(); // _ZN16BackgroundWorker7_tryPopEv
    void resortPriorityQueue(); // _ZN16BackgroundWorker19resortPriorityQueueEv
    void _canAccessInternalState(); // _ZN16BackgroundWorker23_canAccessInternalStateEv
    void resetWorkerThreadID(); // _ZN16BackgroundWorker19resetWorkerThreadIDEv
//  void setMaxSleepTimeout(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition // _ZN16BackgroundWorker18setMaxSleepTimeoutENSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEE
    void getThreadId()const; // _ZNK16BackgroundWorker11getThreadIdEv
    void getLocal(); // _ZN16BackgroundWorker8getLocalEv
    void pushScope(); // _ZN16BackgroundWorker9pushScopeEv
    void popScope(BackgroundWorker *); // _ZN16BackgroundWorker8popScopeEPS_
    void _runOneTask(); // _ZN16BackgroundWorker11_runOneTaskEv
    void requestStop(bool); // _ZN16BackgroundWorker11requestStopEb
//  void setOSPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition // _ZN16BackgroundWorker13setOSPriorityERKN7Bedrock9Threading16OSThreadPriorityE
    std::string getName()const; // _ZNK16BackgroundWorker7getNameB5cxx11Ev
    bool isIdle()const; // _ZNK16BackgroundWorker6isIdleEv
    void getApproximateTaskCount()const; // _ZNK16BackgroundWorker23getApproximateTaskCountEv
};
