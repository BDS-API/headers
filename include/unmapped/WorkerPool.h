#pragma once

#include <optional>
#include <string>
#include "../bedrock/Scheduler.h"
#include <memory>
#include "BackgroundTask.h"


class WorkerPool {

public:
    static long sAllPools;
    static long sAllPoolsMutex;

//  WorkerPool(std::string, unsigned long, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, bool); //TODO: incomplete function definition
    bool hasPendingWork()const;
    bool isAsync()const;
    void getBacklogSizeBusyLimit()const;
    ~WorkerPool();
//  void shiftWorkersPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
    void end()const;
    void allWorkersIdle()const;
    void getThreadIds()const;
    void resortPriorityQueue();
    WorkerPool(std::string, Scheduler &);
    void getAllPools();
    void _checkPendingWork();
    void _registerPool(WorkerPool &);
    void _unregisterPool(WorkerPool &);
    void size()const;
    bool hasReadyWork()const;
    void kick(unsigned long);
    void queue(std::shared_ptr<BackgroundTask>, bool);
    void tryPop(int);
    void getNextPendingWorkTime()const;
    void begin()const;
    void getPerformanceInfo();
};
