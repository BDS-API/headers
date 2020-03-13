#pragma once

#include <memory>


class TaskResult {

public:
    static long Done;
    static long Requeue;

    TaskResult(TaskResult const&); // _ZN10TaskResultC2ERKS_
    ~TaskResult(); // _ZN10TaskResultD2Ev
//  void requeueAfter(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition // _ZN10TaskResult12requeueAfterENSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEE
//  void requeueAt(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition // _ZN10TaskResult9requeueAtENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    void waitFor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); // _ZN10TaskResult7waitForESt10shared_ptrIN7Bedrock9Threading12IAsyncResultIvEEEb
    TaskResult(); // _ZN10TaskResultC2Ev
    TaskResult(bool); // _ZN10TaskResultC2Eb
//  TaskResult(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition // _ZN10TaskResultC2ENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    TaskResult(std::shared_ptr<Bedrock::Threading::IAsyncResult<void>>, bool); // _ZN10TaskResultC2ESt10shared_ptrIN7Bedrock9Threading12IAsyncResultIvEEEb
    bool isDone()const; // _ZNK10TaskResult6isDoneEv
    bool hasDelay()const; // _ZNK10TaskResult8hasDelayEv
    bool isWaiting()const; // _ZNK10TaskResult9isWaitingEv
    void getRunAtTime()const; // _ZNK10TaskResult12getRunAtTimeEv
    void getWaitingOperation()const; // _ZNK10TaskResult19getWaitingOperationEv
    bool isWaitingOperationLinked()const; // _ZNK10TaskResult24isWaitingOperationLinkedEv
};
