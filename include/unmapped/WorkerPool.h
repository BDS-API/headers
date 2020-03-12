#pragma once

#include <optional>
#include <string>
#include <memory>


class WorkerPool {

public:
    static long sAllPools;
    static long sAllPoolsMutex;

    void begin()const;
    void end()const;
    void getThreadIds()const;
    WorkerPool(std::string, Scheduler &);
    bool hasReadyWork()const;
    bool isAsync()const;
    void resortPriorityQueue();
    void tryPop(int);
    void _unregisterPool(WorkerPool &);
    void size()const;
//  WorkerPool(std::string, unsigned long, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, bool); //TODO: incomplete function definition
    void getBacklogSizeBusyLimit()const;
    void kick(unsigned long);
    void _checkPendingWork();
    void getPerformanceInfo();
    void getAllPools();
    void getNextPendingWorkTime()const;
    ~WorkerPool();
    void allWorkersIdle()const;
    void _registerPool(WorkerPool &);
    void queue(std::shared_ptr<BackgroundTask>, bool);
//  void shiftWorkersPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
    bool hasPendingWork()const;
};
