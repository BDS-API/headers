#pragma once

#include "../bedrock/Scheduler.h"
#include <memory>
#include "./WorkerPool.h"
#include <vector>
#include "./TaskResult.h"
#include <functional>


namespace ResourceLoadManager {

class ResourceLoadTaskGroup {

public:

//  ResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType, std::allocator<ResourceLoadType>>, Scheduler &, WorkerPool &); //TODO: incomplete function definition
    void _applyTaskGroupState();
    ~ResourceLoadTaskGroup();
    bool isEmpty()const;
//  void queue(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); //TODO: incomplete function definition
    void getName()const;
//  void queueAsync(std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
//  void queueSync(std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition
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

}