#pragma once

class ITaskExecutionContext {

    virtual void ~ITaskExecutionContext();
    virtual void ~ITaskExecutionContext();
    virtual void isAsync(void)const;
    virtual void canTaskRunAgain(void)const;
}
