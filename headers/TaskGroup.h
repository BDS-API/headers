#pragma once

class TaskGroup : ITaskGroup {

public:
    virtual ~TaskGroup();
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
    virtual void getState(void)const;
    virtual void processCoroutines(void);
    virtual void taskComplete(gsl::not_null<BackgroundTask *>);

    void getCurrentTaskGroup(void);
    void queueChild(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void queueChild(TaskStartInfo &, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void queue(TaskStartInfo &, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void queueChildSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&);
    void queueChildSync(TaskStartInfo &, std::function<TaskResult ()(void)> &&);
    void queueSync(TaskStartInfo &, std::function<TaskResult ()(void)> &&);
    void TaskGroup(WorkerPool &, Scheduler &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void TaskGroup(WorkerPool &, Scheduler &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, TaskType);
    void flush(std::function<void ()(void)>);
    void queue(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&, std::function&&<void ()(void)>);
    void _queueInternal(std::shared_ptr<BackgroundTask>);
    void queueSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()(void)> &&);
    void sync_DEPRECATED_ASK_TOMMO(std::function<void ()(void)>);
    bool isEmpty(void)const;
    void pause(void);
    void resume(void);
    void count(void)const;
    void getMaxConcurrency(void)const;
    void disableOwnerThreadChecks(void);
    void getName(void)const;
    void getWorkerPool(void);
    void getScheduler(void);
    void _forAllTasks(std::unique_lock<std::mutex> &, std::function<void ()(std::shared_ptr<BackgroundTask> const&)>);
    void getOwnerThreadID(void)const;
    void kick(unsigned int);
    void _isOwner(void)const;
};
