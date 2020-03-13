#pragma once

#include <memory>
#include "ITaskGroup.h"


class InternalTaskGroup : ITaskGroup {

public:
    ~InternalTaskGroup(); // _ZN17InternalTaskGroupD2Ev
    virtual void taskRegister(std::shared_ptr<BackgroundTask>); // _ZN17InternalTaskGroup12taskRegisterESt10shared_ptrI14BackgroundTaskE
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool); // _ZN17InternalTaskGroup11requeueTaskESt10shared_ptrI14BackgroundTaskEb
    virtual void getState()const; // _ZNK17InternalTaskGroup8getStateEv
    virtual bool processCoroutines(); // _ZN17InternalTaskGroup17processCoroutinesEv
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition // _ZN17InternalTaskGroup12taskCompleteEN3gsl8not_nullIP14BackgroundTaskEE
};
