#pragma once

#include <memory>


class TaskResult {

public:
    static long Done;
    static long Requeue;

    bool isWaitingOperationLinked()const;
    bool hasDelay()const;
    bool isWaiting()const;
    void getRunAtTime()const;
    TaskResult(TaskResult const&);
    void getWaitingOperation()const;
//  TaskResult(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    bool isDone()const;
    void waitFor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool);
    ~TaskResult();
//  void requeueAt(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    TaskResult();
    TaskResult(bool);
    TaskResult(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool);
//  void requeueAfter(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
};
