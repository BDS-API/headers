#pragma once



class BackgroundWorker : ITaskExecutionContext {

public:
    static long gLocalWorkerMappingSingleton;

    virtual BackgroundWorker::~BackgroundWorker()
    virtual bool isAsync()const;
    virtual bool canTaskRunAgain()const;

    void getCurrentTask();
    BackgroundWorker(std::string, bool, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, WorkerPool &, bool);
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
    void setMaxSleepTimeout(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void getThreadId()const;
    void getLocal();
    void pushScope();
    void popScope(BackgroundWorker*);
    void _runOneTask();
    void requestStop(bool);
    void setOSPriority(Bedrock::Threading::OSThreadPriority const&);
    bool isIdle()const;
    void getApproximateTaskCount()const;
};
