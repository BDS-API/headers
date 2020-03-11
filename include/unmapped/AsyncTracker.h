#pragma once



class AsyncTracker {

public:

    AsyncTracker();
    void trackNewAsyncOperation(int);
    bool hasAsyncOperationTimedOut();
};
