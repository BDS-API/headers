#pragma once



class BackgroundTask : Bedrock::Threading::IAsyncResult<void> {

public:
    virtual BackgroundTask::~BackgroundTask()
    virtual void getStatus()const;
    virtual void getError()const;
    virtual void getException()const;
    virtual void cancel();
    virtual void addOnComplete(std::function<void ()(Bedrock::Threading::IAsyncResult<void> const&)>);
    virtual void invoke();

    void create(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult ()(void)>);
    void _setPredecessor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool);
    BackgroundTask(gsl::not_null<ITaskGroup *>, TaskStartInfo &, bool, std::function<TaskResult ()(void)>);
    void getPrev();
    void getNext();
    void setPrev(BackgroundTask*);
    void setNext(std::shared_ptr<BackgroundTask>);
    void _tryTransitionTo(BackgroundTask::TaskStatus, bool, bool);
    bool isReady()const;
    bool isAsync()const;
    void getGroup();
    bool hasAffinity()const;
    bool canBeRunBy(std::thread::id)const;
    void setStartAfterTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void getStartAfterTime()const;
    bool isReadyToStart(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>)const;
    void getPriority()const;
    void _backDownPriority();
    void getGroupState()const;
    void setSyncPriority();
    void run(ITaskExecutionContext const*);
    void _isCancelPending();
};
