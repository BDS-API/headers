#pragma once

#include "BackgroundTask.h"
#include <memory>


class BackgroundTaskQueue {

public:
    ~BackgroundTaskQueue();
    void getApproximateTaskCount()const;
    void queue(std::shared_ptr<BackgroundTask>, bool);
    void tryPop(int);
    void resortPriorityQueue();
    void flush();
    BackgroundTaskQueue();
    void _fetchAllAvailableTasks();
    void getNextItemPriority()const;
};
