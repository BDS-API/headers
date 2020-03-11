#pragma once

#include "../bedrock/Scheduler.h"
#include <memory>
#include "./ResourceLoadTaskGroup.h"
#include "./TaskResult.h"
#include <vector>
#include <functional>


class ResourceLoadManager {

public:
    static long CURRENT_RUNNING_GROUP;


//  void _wrapTaskCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<TaskResult (void)> &&); //TODO: incomplete function definition
//  void _wrapMainThreadCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<void (void)> &&); //TODO: incomplete function definition
    ResourceLoadManager();
    void _initializeResourceLoadTaskGroups();
    ResourceLoadManager(Scheduler &);
    ~ResourceLoadManager();
//  void registerResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType, std::allocator<ResourceLoadType>>); //TODO: incomplete function definition
    void _prepareTaskGroupToRunAgain(ResourceLoadManager::ResourceLoadTaskGroup *);
//  void queue(ResourceLoadType, std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); //TODO: incomplete function definition
//  void _getResourceLoadTaskGroupFor(ResourceLoadType)const; //TODO: incomplete function definition
//  void queueAsync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
//  void queueSync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
    void update();
    void cancel();
//  void cancel(ResourceLoadType); //TODO: incomplete function definition
//  bool isComplete(ResourceLoadType)const; //TODO: incomplete function definition
    bool isComplete()const;
//  void sync(ResourceLoadType); //TODO: incomplete function definition
    void setAppSuspended(bool);
    bool isSuspended();
//  void queueChild(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); //TODO: incomplete function definition
};
