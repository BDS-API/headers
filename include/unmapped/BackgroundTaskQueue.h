#pragma once

#include <memory>


class BackgroundTaskQueue {

public:
    BackgroundTaskQueue(); // _ZN19BackgroundTaskQueueC2Ev
    ~BackgroundTaskQueue(); // _ZN19BackgroundTaskQueueD2Ev
    void flush(); // _ZN19BackgroundTaskQueue5flushEv
    void queue(std::shared_ptr<BackgroundTask>, bool); // _ZN19BackgroundTaskQueue5queueESt10shared_ptrI14BackgroundTaskEb
    void getApproximateTaskCount()const; // _ZNK19BackgroundTaskQueue23getApproximateTaskCountEv
    void resortPriorityQueue(); // _ZN19BackgroundTaskQueue19resortPriorityQueueEv
    void tryPop(int); // _ZN19BackgroundTaskQueue6tryPopEi
    void _fetchAllAvailableTasks(); // _ZN19BackgroundTaskQueue23_fetchAllAvailableTasksEv
    void getNextItemPriority()const; // _ZNK19BackgroundTaskQueue19getNextItemPriorityEv
};
