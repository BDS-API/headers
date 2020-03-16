#pragma once

#include <memory>
#include <functional>
#include "TaskResult.h"


class BackgroundTask /*public Bedrock::Threading::IAsyncResult<void>*/ { //TODO: incomplete class definition

public:
    virtual ~BackgroundTask(); // _ZN14BackgroundTaskD2Ev
    virtual void __fake_function0(); // fake
    virtual void getStatus()const; // _ZNK14BackgroundTask9getStatusEv
    virtual void getError()const; // _ZNK14BackgroundTask8getErrorEv
    virtual void getException()const; // _ZNK14BackgroundTask12getExceptionEv
    virtual void cancel(); // _ZN14BackgroundTask6cancelEv
    virtual void addOnComplete(std::function<void (long const&)>); // _ZN14BackgroundTask13addOnCompleteESt8functionIFvRKN7Bedrock9Threading12IAsyncResultIvEEEE
    virtual void invoke(); // _ZN14BackgroundTask6invokeEv
//    void create(long, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition // _ZN14BackgroundTask6createEN3gsl8not_nullIP10ITaskGroupEER13TaskStartInfobSt8functionIF10TaskResultvEE
    void _setPredecessor(std::shared_ptr<long>, bool); // _ZN14BackgroundTask15_setPredecessorESt10shared_ptrIN7Bedrock9Threading12IAsyncResultIvEEEb
//    BackgroundTask(long, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition // _ZN14BackgroundTaskC2EN3gsl8not_nullIP10ITaskGroupEER13TaskStartInfobSt8functionIF10TaskResultvEE
    void getPrev(); // _ZN14BackgroundTask7getPrevEv
    void getNext(); // _ZN14BackgroundTask7getNextEv
    void setPrev(BackgroundTask *); // _ZN14BackgroundTask7setPrevEPS_
    void setNext(std::shared_ptr<BackgroundTask>); // _ZN14BackgroundTask7setNextESt10shared_ptrIS_E
//    void _tryTransitionTo(long, bool, bool); //TODO: incomplete function definition // _ZN14BackgroundTask16_tryTransitionToENS_10TaskStatusEbb
    bool isReady()const; // _ZNK14BackgroundTask7isReadyEv
    bool isAsync()const; // _ZNK14BackgroundTask7isAsyncEv
    void getGroup(); // _ZN14BackgroundTask8getGroupEv
    bool hasAffinity()const; // _ZNK14BackgroundTask11hasAffinityEv
//    bool canBeRunBy(long)const; //TODO: incomplete function definition // _ZNK14BackgroundTask10canBeRunByENSt6thread2idE
//    void setStartAfterTime(long); //TODO: incomplete function definition // _ZN14BackgroundTask17setStartAfterTimeENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    void getStartAfterTime()const; // _ZNK14BackgroundTask17getStartAfterTimeEv
//    bool isReadyToStart(long)const; //TODO: incomplete function definition // _ZNK14BackgroundTask14isReadyToStartENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    void getPriority()const; // _ZNK14BackgroundTask11getPriorityEv
    void _backDownPriority(); // _ZN14BackgroundTask17_backDownPriorityEv
    void getGroupState()const; // _ZNK14BackgroundTask13getGroupStateEv
    void setSyncPriority(); // _ZN14BackgroundTask15setSyncPriorityEv
    void run(ITaskExecutionContext const*); // _ZN14BackgroundTask3runEPK21ITaskExecutionContext
    void _isCancelPending(); // _ZN14BackgroundTask16_isCancelPendingEv
};
