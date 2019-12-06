#pragma once

class BackgroundTask : Bedrock::Threading::IAsyncResult_ltvoid_ge {

public:
    virtual ~BackgroundTask();
    virtual void getStatus(void)const;
    virtual void getError(void)const;
    virtual void getException(void)const;
    virtual void cancel(void);
    virtual void addOnComplete(std::function<void ()(Bedrock::Threading::IAsyncResult<void> const&)>);
    virtual void invoke(void);

    void create(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult ()(void)>);
    void _setPredecessor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool);
    void BackgroundTask(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult ()(void)>);
    void getPrev(void);
    void getNext(void);
    void setPrev(BackgroundTask*);
    void setNext(std::shared_ptr<BackgroundTask>);
    void _tryTransitionTo(BackgroundTask::TaskStatus, bool, bool);
    bool isReady(void)const;
    bool isAsync(void)const;
    void getGroup(void);
    bool hasAffinity(void)const;
    bool canBeRunBy(std::thread::id)const;
    void setStartAfterTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void getStartAfterTime(void)const;
    bool isReadyToStart(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>)const;
    void getPriority(void)const;
    void _backDownPriority(void);
    void getGroupState(void)const;
    void setSyncPriority(void);
    void run(ITaskExecutionContext const*);
    void _isCancelPending(void);
};
