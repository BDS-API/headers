#pragma once

#include "ITaskGroup.h"
#include "BackgroundTask.h"
#include <memory>


class InternalTaskGroup : ITaskGroup {

public:
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition
    ~InternalTaskGroup();
    virtual bool processCoroutines();
    virtual void getState()const;
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
};
