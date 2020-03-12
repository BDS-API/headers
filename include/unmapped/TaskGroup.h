#pragma once

#include <mutex>
#include <memory>
#include <string>
#include <functional>
#include "ITaskGroup.h"
#include "TaskResult.h"


class TaskGroup : ITaskGroup {

public:
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    ~TaskGroup();
    virtual bool processCoroutines();
    virtual void getState()const;
    void queueSync(TaskStartInfo &, std::function<TaskResult (void)> &&);
//  TaskGroup(WorkerPool &, Scheduler &, std::string, TaskType); //TODO: incomplete function definition
    void getOwnerThreadID()const;
    TaskGroup(WorkerPool &, Scheduler &, std::string);
    void getMaxConcurrency()const;
    void _isOwner()const;
    void _queueInternal(std::shared_ptr<BackgroundTask>);
    void queueChildSync(TaskStartInfo &, std::function<TaskResult (void)> &&);
    void count()const;
//  void queueSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
//  void queueChildSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
    void getName()const;
//  void queue(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
    void disableOwnerThreadChecks();
    void getCurrentTaskGroup();
//  void queueChild(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
    void pause();
    void flush(std::function<void (void)>);
    void queueChild(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&);
    void sync_DEPRECATED_ASK_TOMMO(std::function<void (void)>);
    void getWorkerPool();
    bool isEmpty()const;
    void getScheduler();
    void _forAllTasks(std::unique_lock<std::mutex> &, std::function<void (std::shared_ptr<BackgroundTask> const&)>);
    void queue(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&);
    void resume();
    void kick(unsigned int);
};
