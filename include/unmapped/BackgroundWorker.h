#pragma once

#include "BackgroundTask.h"
#include <string>
#include "ITaskExecutionContext.h"
#include <ratio>
#include <memory>
#include "WorkerPool.h"
#include <optional>


class BackgroundWorker : ITaskExecutionContext {

public:
    static long gLocalWorkerMappingSingleton;

    ~BackgroundWorker();
    virtual bool isAsync()const;
    virtual bool canTaskRunAgain()const;
    void getThreadId()const;
//  void setMaxSleepTimeout(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void popScope(BackgroundWorker *);
//  void setOSPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
    void getApproximateTaskCount()const;
    void getCurrentTask();
    void _processNextTask();
    void requestStop(bool);
    std::string getName()const;
    void wake();
    void getLocal();
    bool processTaskSync();
    void _canAccessInternalState();
    void start();
    void resortPriorityQueue();
    void _runOneTask();
    void _assignWorkerToThisThread();
    void queue(std::shared_ptr<BackgroundTask>);
    void _sleepTimeoutElapsed()const;
    void _workerThread()const;
    void pushScope();
    void _setOSPriority();
//  BackgroundWorker(std::string, bool, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, WorkerPool &, bool); //TODO: incomplete function definition
    bool isIdle()const;
    void _hasAvailableWork()const;
    void _doNoWorkDelay();
    void _setCoreAffinity();
    void resetWorkerThreadID();
    void _tryPop();
};
