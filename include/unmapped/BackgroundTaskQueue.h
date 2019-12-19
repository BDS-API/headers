#pragma once

class BackgroundTaskQueue {

public:

    BackgroundTaskQueue(void);
    void flush(void);
    void queue(std::shared_ptr<BackgroundTask>, bool);
    void getApproximateTaskCount(void)const;
    void resortPriorityQueue(void);
    void tryPop(int);
    void _fetchAllAvailableTasks(void);
    void getNextItemPriority(void)const;
};
