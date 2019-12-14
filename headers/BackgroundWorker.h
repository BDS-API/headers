#pragma once

class BackgroundWorker : ITaskExecutionContext {

public:
    static long BackgroundWorker::gLocalWorkerMappingSingleton;

    virtual ~BackgroundWorker();
    virtual bool isAsync(void)const;
    virtual bool canTaskRunAgain(void)const;

    void getCurrentTask(void);
    void BackgroundWorker(std::string, bool, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, WorkerPool &, bool);
    void wake(void);
    void _hasAvailableWork(void)const;
    void queue(std::shared_ptr<BackgroundTask>);
    void _assignWorkerToThisThread(void);
    void start(void);
    void _setCoreAffinity(void);
    void _setOSPriority(void);
    void _doNoWorkDelay(void);
    void _sleepTimeoutElapsed(void)const;
    void _workerThread(void)const;
    void processTaskSync(void);
    void _processNextTask(void);
    void _tryPop(void);
    void resortPriorityQueue(void);
    void _canAccessInternalState(void);
    void resetWorkerThreadID(void);
    void setMaxSleepTimeout(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void getThreadId(void)const;
    void getLocal(void);
    void pushScope(void);
    void popScope(BackgroundWorker*);
    void _runOneTask(void);
    void requestStop(bool);
    void setOSPriority(Bedrock::Threading::OSThreadPriority const&);
    bool isIdle(void)const;
    void getApproximateTaskCount(void)const;
};
