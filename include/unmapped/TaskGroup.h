#pragma once

#include "TaskStartInfo.h"
#include <string>
#include "ITaskGroup.h"
#include "../bedrock/Scheduler.h"
#include "TaskResult.h"
#include <mutex>
#include <functional>
#include <memory>
#include "WorkerPool.h"
#include "BackgroundTask.h"


class TaskGroup : ITaskGroup {

public:
    ~TaskGroup();
    virtual bool processCoroutines();
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    virtual void getState()const;
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition
    void count()const;
    void getName()const;
    void queue(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&);
    bool isEmpty()const;
    void queueChild(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&);
//  void queueChild(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
    void getMaxConcurrency()const;
//  void queueChildSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
    void kick(unsigned int);
//  TaskGroup(WorkerPool &, Scheduler &, std::string, TaskType); //TODO: incomplete function definition
    void _isOwner()const;
    void _queueInternal(std::shared_ptr<BackgroundTask>);
    TaskGroup(WorkerPool &, Scheduler &, std::string);
    void pause();
//  void queueSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
    void getCurrentTaskGroup();
//  void queue(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
    void sync_DEPRECATED_ASK_TOMMO(std::function<void (void)>);
    void resume();
    void getScheduler();
    void getOwnerThreadID()const;
    void getWorkerPool();
    void flush(std::function<void (void)>);
    void _forAllTasks(std::unique_lock<std::mutex> &, std::function<void (std::shared_ptr<BackgroundTask> const&)>);
    void disableOwnerThreadChecks();
    void queueSync(TaskStartInfo &, std::function<TaskResult (void)> &&);
    void queueChildSync(TaskStartInfo &, std::function<TaskResult (void)> &&);
};
