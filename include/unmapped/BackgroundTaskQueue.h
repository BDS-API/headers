#pragma once

#include <memory>


class BackgroundTaskQueue {

public:
    ~BackgroundTaskQueue();
    BackgroundTaskQueue();
    void resortPriorityQueue();
    void getApproximateTaskCount()const;
    void getNextItemPriority()const;
    void flush();
    void queue(std::shared_ptr<BackgroundTask>, bool);
    void tryPop(int);
    void _fetchAllAvailableTasks();
};
