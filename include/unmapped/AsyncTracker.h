#pragma once



class AsyncTracker {

public:
    AsyncTracker(); // _ZN12AsyncTrackerC2Ev
    void trackNewAsyncOperation(int); // _ZN12AsyncTracker22trackNewAsyncOperationEi
    bool hasAsyncOperationTimedOut(); // _ZN12AsyncTracker25hasAsyncOperationTimedOutEv
};
