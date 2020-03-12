#pragma once

#include <memory>
#include "TaskResult.h"
#include <functional>


class BackgroundTask /*Bedrock::Threading::IAsyncResult<void>*/ { //TODO: incomplete class definition

public:
    virtual void getError()const;
    virtual void getException()const;
    virtual void addOnComplete(std::function<void (Bedrock::Threading::IAsyncResult<void> const&)>);
    virtual void getStatus()const;
    virtual void cancel();
    virtual void invoke();
    ~BackgroundTask();
    bool isReady()const;
    void setNext(std::shared_ptr<BackgroundTask>);
    void _backDownPriority();
    bool hasAffinity()const;
    void getNext();
    void getGroup();
    void getGroupState()const;
//  void _tryTransitionTo(BackgroundTask::TaskStatus, bool, bool); //TODO: incomplete function definition
//  bool isReadyToStart(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>)const; //TODO: incomplete function definition
//  void setStartAfterTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void run(ITaskExecutionContext const*);
    void getStartAfterTime()const;
//  BackgroundTask(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition
//  bool canBeRunBy(std::thread::id)const; //TODO: incomplete function definition
    void setPrev(BackgroundTask *);
    void setSyncPriority();
    void getPriority()const;
//  void create(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition
    bool isAsync()const;
    void _isCancelPending();
    void getPrev();
    void _setPredecessor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool);
};
