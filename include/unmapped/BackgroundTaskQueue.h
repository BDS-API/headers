#pragma once

#include <memory>
#include "./BackgroundTask.h"


class BackgroundTaskQueue {

public:

    BackgroundTaskQueue();
    ~BackgroundTaskQueue();
    void flush();
    void queue(std::shared_ptr<BackgroundTask>, bool);
    void getApproximateTaskCount()const;
    void resortPriorityQueue();
    void tryPop(int);
    void _fetchAllAvailableTasks();
    void getNextItemPriority()const;
};
