#pragma once

#include "../bedrock/Scheduler"


class WorkerPool {

public:
    static long sAllPools;
    static long sAllPoolsMutex;


    void begin()const;
    bool isAsync()const;
    void end()const;
    void getAllPools();
    void _registerPool(WorkerPool&);
    void _unregisterPool(WorkerPool&);
    WorkerPool(std::string, unsigned long, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, bool);
    WorkerPool(std::string, Scheduler &);
    void kick(unsigned long);
    void getBacklogSizeBusyLimit()const;
    void queue(std::shared_ptr<BackgroundTask>, bool);
    void tryPop(int);
    void _checkPendingWork();
    void resortPriorityQueue();
    void size()const;
    void getThreadIds()const;
    void allWorkersIdle()const;
    void shiftWorkersPriority(Bedrock::Threading::OSThreadPriority const&);
    bool hasPendingWork()const;
    void getNextPendingWorkTime()const;
    void getPerformanceInfo();
    bool hasReadyWork()const;
};
