#pragma once

#include <string>
#include <optional>
#include <memory>


class WorkerPool {

public:
    static long sAllPools;
    static long sAllPoolsMutex;

    void begin()const; // _ZNK10WorkerPool5beginEv
    bool isAsync()const; // _ZNK10WorkerPool7isAsyncEv
    void end()const; // _ZNK10WorkerPool3endEv
    void getAllPools(); // _ZN10WorkerPool11getAllPoolsEv
    void _registerPool(WorkerPool &); // _ZN10WorkerPool13_registerPoolERS_
    void _unregisterPool(WorkerPool &); // _ZN10WorkerPool15_unregisterPoolERS_
//  WorkerPool(std::string, unsigned long, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, bool); //TODO: incomplete function definition // _ZN10WorkerPoolC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmRKN7Bedrock9Threading16OSThreadPriorityESt8optionalImEb
    WorkerPool(std::string, Scheduler &); // _ZN10WorkerPoolC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER9Scheduler
    ~WorkerPool(); // _ZN10WorkerPoolD2Ev
    void kick(unsigned long); // _ZN10WorkerPool4kickEm
    void getBacklogSizeBusyLimit()const; // _ZNK10WorkerPool23getBacklogSizeBusyLimitEv
    void queue(std::shared_ptr<BackgroundTask>, bool); // _ZN10WorkerPool5queueESt10shared_ptrI14BackgroundTaskEb
    void tryPop(int); // _ZN10WorkerPool6tryPopEi
    void _checkPendingWork(); // _ZN10WorkerPool17_checkPendingWorkEv
    void resortPriorityQueue(); // _ZN10WorkerPool19resortPriorityQueueEv
    void size()const; // _ZNK10WorkerPool4sizeEv
    void getThreadIds()const; // _ZNK10WorkerPool12getThreadIdsEv
    void allWorkersIdle()const; // _ZNK10WorkerPool14allWorkersIdleEv
//  void shiftWorkersPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition // _ZN10WorkerPool20shiftWorkersPriorityERKN7Bedrock9Threading16OSThreadPriorityE
    bool hasPendingWork()const; // _ZNK10WorkerPool14hasPendingWorkEv
    void getNextPendingWorkTime()const; // _ZNK10WorkerPool22getNextPendingWorkTimeEv
    void getPerformanceInfo(); // _ZN10WorkerPool18getPerformanceInfoEv
    bool hasReadyWork()const; // _ZNK10WorkerPool12hasReadyWorkEv
};
