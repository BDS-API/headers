#pragma once

#include <ratio>
#include <memory>
#include "./TaskResult.h"


class TaskResult {

public:
    static long Done;
    static long Requeue;


    TaskResult(TaskResult const&);
    ~TaskResult();
//  void requeueAfter(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
//  void requeueAt(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
//  void waitFor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); //TODO: incomplete function definition
    TaskResult();
    TaskResult(bool);
//  TaskResult(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
//  TaskResult(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); //TODO: incomplete function definition
    bool isDone()const;
    bool hasDelay()const;
    bool isWaiting()const;
    void getRunAtTime()const;
    void getWaitingOperation()const;
    bool isWaitingOperationLinked()const;
};
