#pragma once

class WorkerPool {

public:
    static long WorkerPool::sAllPools;
    static long WorkerPool::sAllPoolsMutex;


    void begin(void)const;
    bool isAsync(void)const;
    void end(void)const;
    void getAllPools(void);
    void _registerPool(WorkerPool&);
    void _unregisterPool(WorkerPool&);
    void WorkerPool(std::string, unsigned long, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, bool);
    void WorkerPool(std::string, Scheduler &);
    void kick(unsigned long);
    void getBacklogSizeBusyLimit(void)const;
    void queue(std::shared_ptr<BackgroundTask>, bool);
    void tryPop(int);
    void _checkPendingWork(void);
    void resortPriorityQueue(void);
    void size(void)const;
    void getThreadIds(void)const;
    void allWorkersIdle(void)const;
    void shiftWorkersPriority(Bedrock::Threading::OSThreadPriority const&);
    bool hasPendingWork(void)const;
    void getNextPendingWorkTime(void)const;
    void getPerformanceInfo(void);
    bool hasReadyWork(void)const;
};
