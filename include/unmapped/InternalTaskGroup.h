#pragma once

class InternalTaskGroup : ITaskGroup {

public:
    virtual InternalTaskGroup::~InternalTaskGroup();
    virtual void taskRegister(std::shared_ptr<BackgroundTask>);
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool);
    virtual void getState(void)const;
    virtual void processCoroutines(void);
    virtual void taskComplete(gsl::not_null<BackgroundTask *>);

};
