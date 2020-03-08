#pragma once

#include "../bedrock/Scheduler"


using namespace ResourceLoadManager;

class ResourceLoadTaskGroup {

public:

    ResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType, std::allocator<ResourceLoadType>>, Scheduler &, WorkerPool &);
    void _applyTaskGroupState();
    bool isEmpty()const;
    void queue(std::function<TaskResult ()(void)>, std::function<void ()(void)>, unsigned int);
    void getName()const;
    void queueAsync(std::function<TaskResult ()(void)>, unsigned int);
    void queueSync(std::function<TaskResult ()(void)>, unsigned int);
    void start();
    void pause();
    void resume();
    void update();
    void reset();
    void sync();
    void getResourceLoadType();
    void getDependencies()const;
    bool isRunning()const;
};
