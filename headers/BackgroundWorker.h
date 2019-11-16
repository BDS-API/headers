#pragma once

class BackgroundWorker : ITaskExecutionContext {

    virtual void ~BackgroundWorker();
    virtual void ~BackgroundWorker();
    virtual void isAsync(void)const;
    virtual void canTaskRunAgain(void)const;
}
