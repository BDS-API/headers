#pragma once

#include "../bedrock/Scheduler.h"
#include "TaskResult.h"
#include <functional>
#include <vector>
#include "WorkerPool.h"


class ResourceLoadManager {

public:
    class ResourceLoadTaskGroup;
    class TaskGroupState;

    static long CURRENT_RUNNING_GROUP;

    ResourceLoadManager();
//  void cancel(ResourceLoadType); //TODO: incomplete function definition
    ~ResourceLoadManager();
    void _wrapMainThreadCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<void (void)> &&);
    bool isSuspended();
    void _prepareTaskGroupToRunAgain(ResourceLoadManager::ResourceLoadTaskGroup *);
    ResourceLoadManager(Scheduler &);
//  bool isComplete(ResourceLoadType)const; //TODO: incomplete function definition
    bool isComplete()const;
//  void queueSync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
//  void sync(ResourceLoadType); //TODO: incomplete function definition
//  void _getResourceLoadTaskGroupFor(ResourceLoadType)const; //TODO: incomplete function definition
    void setAppSuspended(bool);
    void cancel();
    void _initializeResourceLoadTaskGroups();
    void _wrapTaskCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<TaskResult (void)> &&);
//  void queueAsync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
//  void registerResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType>); //TODO: incomplete function definition
    void update();
//  void queue(ResourceLoadType, std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); //TODO: incomplete function definition
    void queueChild(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int);
    class ResourceLoadTaskGroup {

    public:
        void getName()const;
        void pause();
        void queueSync(std::function<TaskResult (void)>, unsigned int);
        bool isRunning()const;
//      ResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType>, Scheduler &, WorkerPool &); //TODO: incomplete function definition
        void getResourceLoadType();
        void update();
        void reset();
        void _applyTaskGroupState();
        void queue(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int);
        ~ResourceLoadTaskGroup();
        void queueAsync(std::function<TaskResult (void)>, unsigned int);
        void start();
        void sync();
        bool isEmpty()const;
        void getDependencies()const;
        void resume();
    };
    class TaskGroupState {

    public:
        TaskGroupState();
        void resume();
        void pause();
        void stop();
        void getIsRunning()const;
        void getShouldTaskGroupPause()const;
        void start();
    };
};
