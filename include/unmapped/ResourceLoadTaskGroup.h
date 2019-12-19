#pragma once

using namespace ResourceLoadManager;

class ResourceLoadTaskGroup {

public:

    ResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType, std::allocator<ResourceLoadType>>, Scheduler &, WorkerPool &);
    void _applyTaskGroupState(void);
    bool isEmpty(void)const;
    void queue(std::function<TaskResult ()(void)>, std::function<void ()(void)>, unsigned int);
    void getName(void)const;
    void queueAsync(std::function<TaskResult ()(void)>, unsigned int);
    void queueSync(std::function<TaskResult ()(void)>, unsigned int);
    void start(void);
    void pause(void);
    void resume(void);
    void update(void);
    void reset(void);
    void sync(void);
    void getResourceLoadType(void);
    void getDependencies(void)const;
    bool isRunning(void)const;
};
