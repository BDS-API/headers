#pragma once

#include "./TaskStartInfo.h"
#include "../bedrock/Scheduler.h"
#include <memory>
#include "./BackgroundTask.h"
#include <mutex>
#include "./WorkerPool.h"
#include "./ITaskGroup.h"
#include "./TaskResult.h"
#include <functional>
#include <string>


class TaskGroup : ITaskGroup {

public:
    virtual ~TaskGroup();
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
    virtual void getState()const;
    virtual bool processCoroutines();
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition

    void getCurrentTaskGroup();
//  void queueChild(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
//  void queueChild(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
//  void queue(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
//  void queueChildSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
//  void queueChildSync(TaskStartInfo &, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
//  void queueSync(TaskStartInfo &, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
    TaskGroup(WorkerPool &, Scheduler &, std::string);
//  TaskGroup(WorkerPool &, Scheduler &, std::string, TaskType); //TODO: incomplete function definition
//  void flush(std::function<void (void)>); //TODO: incomplete function definition
//  void queue(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition
    void _queueInternal(std::shared_ptr<BackgroundTask>);
//  void queueSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
//  void sync_DEPRECATED_ASK_TOMMO(std::function<void (void)>); //TODO: incomplete function definition
    bool isEmpty()const;
    void pause();
    void resume();
    void count()const;
    void getMaxConcurrency()const;
    void disableOwnerThreadChecks();
    void getName()const;
    void getWorkerPool();
    void getScheduler();
//  void _forAllTasks(std::unique_lock<std::mutex> &, std::function<void (std::shared_ptr<BackgroundTask> const&)>); //TODO: incomplete function definition
    void getOwnerThreadID()const;
    void kick(unsigned int);
    void _isOwner()const;
};
