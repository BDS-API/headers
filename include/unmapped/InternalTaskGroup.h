#pragma once

#include <memory>
#include "ITaskGroup.h"


class InternalTaskGroup : ITaskGroup {

public:
    virtual bool processCoroutines();
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    virtual void getState()const;
    ~InternalTaskGroup();
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition
};
