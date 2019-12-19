#pragma once

class ResourceLoadManager {

public:
    static long CURRENT_RUNNING_GROUP;


    void _wrapTaskCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<TaskResult ()(void)> &&);
    void _wrapMainThreadCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<void ()(void)> &&);
    ResourceLoadManager(void);
    void _initializeResourceLoadTaskGroups(void);
    ResourceLoadManager(Scheduler &);
    void registerResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType, std::allocator<ResourceLoadType>>);
    void _prepareTaskGroupToRunAgain(ResourceLoadManager::ResourceLoadTaskGroup *);
    void queue(ResourceLoadType, std::function<TaskResult ()(void)>, std::function<void ()(void)>, unsigned int);
    void _getResourceLoadTaskGroupFor(ResourceLoadType)const;
    void queueAsync(ResourceLoadType, std::function<TaskResult ()(void)>, unsigned int);
    void queueSync(ResourceLoadType, std::function<TaskResult ()(void)>, unsigned int);
    void update(void);
    void cancel(void);
    void cancel(ResourceLoadType);
    bool isComplete(ResourceLoadType)const;
    bool isComplete(void)const;
    void sync(ResourceLoadType);
    void setAppSuspended(bool);
    bool isSuspended(void);
    void queueChild(std::function<TaskResult ()(void)>, std::function<void ()(void)>, unsigned int);
};
