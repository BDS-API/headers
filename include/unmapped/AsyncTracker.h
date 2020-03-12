#pragma once



class AsyncTracker {

public:
    void trackNewAsyncOperation(int);
    AsyncTracker();
    bool hasAsyncOperationTimedOut();
};
