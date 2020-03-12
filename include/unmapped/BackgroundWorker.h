#pragma once

#include <optional>
#include "ITaskExecutionContext.h"
#include <string>
#include <memory>


class BackgroundWorker : ITaskExecutionContext {

public:
    static long gLocalWorkerMappingSingleton;

    virtual bool canTaskRunAgain()const;
    ~BackgroundWorker();
    virtual bool isAsync()const;
    void wake();
    void _runOneTask();
//  void setMaxSleepTimeout(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void getLocal();
    void pushScope();
    void getThreadId()const;
    void resortPriorityQueue();
    void _tryPop();
    bool processTaskSync();
    void _sleepTimeoutElapsed()const;
//  void setOSPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
    void _canAccessInternalState();
//  BackgroundWorker(std::string, bool, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, WorkerPool &, bool); //TODO: incomplete function definition
    void _hasAvailableWork()const;
    std::string getName()const;
    void requestStop(bool);
    bool isIdle()const;
    void resetWorkerThreadID();
    void _doNoWorkDelay();
    void popScope(BackgroundWorker *);
    void start();
    void getApproximateTaskCount()const;
    void queue(std::shared_ptr<BackgroundTask>);
    void _processNextTask();
    void _setCoreAffinity();
    void _assignWorkerToThisThread();
    void _workerThread()const;
    void getCurrentTask();
    void _setOSPriority();
};
