#pragma once

class AsyncTracker {

public:

    void AsyncTracker(void);
    void trackNewAsyncOperation(int);
    bool hasAsyncOperationTimedOut(void);
};
