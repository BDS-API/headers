#pragma once

class TaskResult {

public:
    static long Done;
    static long Requeue;


    void TaskResult(TaskResult const&);
    void requeueAfter(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void requeueAt(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void waitFor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool);
    void TaskResult(void);
    void TaskResult(bool);
    void TaskResult(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void TaskResult(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool);
    bool isDone(void)const;
    bool hasDelay(void)const;
    bool isWaiting(void)const;
    void getRunAtTime(void)const;
    void getWaitingOperation(void)const;
    bool isWaitingOperationLinked(void)const;
};
