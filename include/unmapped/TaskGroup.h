#pragma once

#include "../bedrock/Scheduler"


class TaskGroup : ITaskGroup {

public:
    virtual TaskGroup::~TaskGroup()
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
    virtual void getState()const;
    virtual bool processCoroutines();
    virtual void taskComplete(gsl::not_null<BackgroundTask *>);

    void getCurrentTaskGroup();
    void queueChild(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void queueChild(TaskStartInfo &, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void queue(TaskStartInfo &, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void queueChildSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&);
    void queueChildSync(TaskStartInfo &, std::function<TaskResult ()(void)> &&);
    void queueSync(TaskStartInfo &, std::function<TaskResult ()(void)> &&);
    TaskGroup(WorkerPool &, Scheduler &, std::string);
    TaskGroup(WorkerPool &, Scheduler &, std::string, TaskType);
    void flush(std::function<void ()(void)>);
    void queue(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void _queueInternal(std::shared_ptr<BackgroundTask>);
    void queueSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&);
    void sync_DEPRECATED_ASK_TOMMO(std::function<void ()(void)>);
    bool isEmpty()const;
    void pause();
    void resume();
    void count()const;
    void getMaxConcurrency()const;
    void disableOwnerThreadChecks();
    void getName()const;
    void getWorkerPool();
    void getScheduler();
    void _forAllTasks(std::unique_lock<std::mutex> &, std::function<void ()(std::shared_ptr<BackgroundTask> const&)>);
    void getOwnerThreadID()const;
    void kick(unsigned int);
    void _isOwner()const;
};
