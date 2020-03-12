#pragma once

#include <ratio>
#include <memory>


class TaskResult {

public:
    static long Done;
    static long Requeue;

    TaskResult();
//  void waitFor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); //TODO: incomplete function definition
//  void requeueAt(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
//  TaskResult(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
//  TaskResult(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); //TODO: incomplete function definition
    bool hasDelay()const;
    bool isDone()const;
    TaskResult(TaskResult const&);
    void getRunAtTime()const;
    bool isWaitingOperationLinked()const;
    void getWaitingOperation()const;
//  void requeueAfter(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    TaskResult(bool);
    bool isWaiting()const;
    ~TaskResult();
};
