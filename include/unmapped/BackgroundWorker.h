#pragma once

#include "./BackgroundWorker.h"
#include <ratio>
#include <memory>
#include "./BackgroundTask.h"
#include "./WorkerPool.h"
#include "./ITaskExecutionContext.h"
#include <optional>
#include <string>


class BackgroundWorker : ITaskExecutionContext {

public:
    static long gLocalWorkerMappingSingleton;

    virtual ~BackgroundWorker();
    virtual bool isAsync()const;
    virtual bool canTaskRunAgain()const;

    void getCurrentTask();
//  BackgroundWorker(std::string, bool, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, WorkerPool &, bool); //TODO: incomplete function definition
    void wake();
    void _hasAvailableWork()const;
    void queue(std::shared_ptr<BackgroundTask>);
    void _assignWorkerToThisThread();
    void start();
    void _setCoreAffinity();
    void _setOSPriority();
    void _doNoWorkDelay();
    void _sleepTimeoutElapsed()const;
    void _workerThread()const;
    bool processTaskSync();
    void _processNextTask();
    void _tryPop();
    void resortPriorityQueue();
    void _canAccessInternalState();
    void resetWorkerThreadID();
//  void setMaxSleepTimeout(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void getThreadId()const;
    void getLocal();
    void pushScope();
    void popScope(BackgroundWorker *);
    void _runOneTask();
    void requestStop(bool);
//  void setOSPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
    std::string getName()const;
    bool isIdle()const;
    void getApproximateTaskCount()const;
};
