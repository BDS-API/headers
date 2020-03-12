#pragma once

#include "TaskStartInfo.h"
#include "ITaskGroup.h"
#include "ITaskExecutionContext.h"
#include <ratio>
#include "TaskResult.h"
#include <functional>
#include <memory>


class BackgroundTask /*Bedrock::Threading::IAsyncResult<void>*/ { //TODO: incomplete class definition

public:
    virtual void getException()const;
    virtual void invoke();
    virtual void getError()const;
    ~BackgroundTask();
    virtual void cancel();
    virtual void getStatus()const;
//  virtual void addOnComplete(std::function<void (Bedrock::Threading::IAsyncResult<void> const&)>); //TODO: incomplete function definition
    bool hasAffinity()const;
    void setPrev(BackgroundTask *);
    void setNext(std::shared_ptr<BackgroundTask>);
    void getGroupState()const;
    void getGroup();
    void setSyncPriority();
//  void _setPredecessor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); //TODO: incomplete function definition
    bool isReady()const;
    void _backDownPriority();
//  BackgroundTask(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition
//  bool canBeRunBy(std::thread::id)const; //TODO: incomplete function definition
//  void create(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition
//  void setStartAfterTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void getPriority()const;
    void getPrev();
//  bool isReadyToStart(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>)const; //TODO: incomplete function definition
    void getStartAfterTime()const;
//  void _tryTransitionTo(BackgroundTask::TaskStatus, bool, bool); //TODO: incomplete function definition
    bool isAsync()const;
    void run(ITaskExecutionContext const*);
    void _isCancelPending();
    void getNext();
};
