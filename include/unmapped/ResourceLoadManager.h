#pragma once

#include "TaskResult.h"
#include <vector>
#include <functional>


class ResourceLoadManager {

public:
    class ResourceLoadTaskGroup;
    class TaskGroupState;

    static long CURRENT_RUNNING_GROUP;

    void queueChild(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int);
//  void queueSync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
    ResourceLoadManager();
//  bool isComplete(ResourceLoadType)const; //TODO: incomplete function definition
//  void queue(ResourceLoadType, std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); //TODO: incomplete function definition
    bool isComplete()const;
    void _wrapTaskCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<TaskResult (void)> &&);
    void cancel();
//  void cancel(ResourceLoadType); //TODO: incomplete function definition
//  void queueAsync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
    void setAppSuspended(bool);
    ResourceLoadManager(Scheduler &);
//  void sync(ResourceLoadType); //TODO: incomplete function definition
//  void _getResourceLoadTaskGroupFor(ResourceLoadType)const; //TODO: incomplete function definition
    bool isSuspended();
    void _wrapMainThreadCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<void (void)> &&);
    void _prepareTaskGroupToRunAgain(ResourceLoadManager::ResourceLoadTaskGroup *);
    void _initializeResourceLoadTaskGroups();
//  void registerResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType>); //TODO: incomplete function definition
    void update();
    ~ResourceLoadManager();
    class ResourceLoadTaskGroup {

    public:
        void queue(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int);
        ~ResourceLoadTaskGroup();
        void sync();
        void start();
        void queueAsync(std::function<TaskResult (void)>, unsigned int);
        void pause();
        void getDependencies()const;
        void reset();
//      ResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType>, Scheduler &, WorkerPool &); //TODO: incomplete function definition
        bool isEmpty()const;
        void _applyTaskGroupState();
        void resume();
        void update();
        void getName()const;
        void getResourceLoadType();
        void queueSync(std::function<TaskResult (void)>, unsigned int);
        bool isRunning()const;
    };
    class TaskGroupState {

    public:
        void getIsRunning()const;
        void resume();
        void stop();
        void getShouldTaskGroupPause()const;
        TaskGroupState();
        void start();
        void pause();
    };
};
