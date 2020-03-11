#pragma once

#include "./TaskStartInfo.h"
#include <ratio>
#include <memory>
#include "./BackgroundTask.h"
#include "./ITaskExecutionContext.h"
#include "./TaskResult.h"
#include "./ITaskGroup.h"
#include <functional>


class BackgroundTask /*Bedrock::Threading::IAsyncResult<void>*/ { //TODO: incomplete class definition

public:
    virtual ~BackgroundTask();
    virtual void getStatus()const;
    virtual void getError()const;
    virtual void getException()const;
    virtual void cancel();
//  virtual void addOnComplete(std::function<void (Bedrock::Threading::IAsyncResult<void> const&)>); //TODO: incomplete function definition
    virtual void invoke();

//  void create(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition
//  void _setPredecessor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); //TODO: incomplete function definition
//  BackgroundTask(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult (void)>); //TODO: incomplete function definition
    void getPrev();
    void getNext();
    void setPrev(BackgroundTask *);
    void setNext(std::shared_ptr<BackgroundTask>);
//  void _tryTransitionTo(BackgroundTask::TaskStatus, bool, bool); //TODO: incomplete function definition
    bool isReady()const;
    bool isAsync()const;
    void getGroup();
    bool hasAffinity()const;
//  bool canBeRunBy(std::thread::id)const; //TODO: incomplete function definition
//  void setStartAfterTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void getStartAfterTime()const;
//  bool isReadyToStart(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>)const; //TODO: incomplete function definition
    void getPriority()const;
    void _backDownPriority();
    void getGroupState()const;
    void setSyncPriority();
    void run(ITaskExecutionContext const*);
    void _isCancelPending();
};
