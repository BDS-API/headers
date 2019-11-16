#pragma once

class BackgroundWorker : ITaskExecutionContext {

    virtual ~BackgroundWorker();
    virtual ~BackgroundWorker();
    virtual void isAsync(void)const;
    virtual void canTaskRunAgain(void)const;
}
