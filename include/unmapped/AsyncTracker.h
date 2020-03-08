#pragma once



class AsyncTracker {

public:

    AsyncTracker(void);
    void trackNewAsyncOperation(int);
    bool hasAsyncOperationTimedOut();
};
