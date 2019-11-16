#pragma once

class ITaskExecutionContext {

    virtual ~ITaskExecutionContext();
    virtual ~ITaskExecutionContext();
    virtual void isAsync(void)const;
    virtual void canTaskRunAgain(void)const;
}
