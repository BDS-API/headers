#pragma once

#include <memory>
#include "./ITaskGroup.h"
#include "./BackgroundTask.h"


class InternalTaskGroup : ITaskGroup {

public:
    virtual ~InternalTaskGroup();
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
    virtual void getState()const;
    virtual bool processCoroutines();
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition

};
