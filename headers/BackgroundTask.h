#pragma once

class BackgroundTask : Bedrock::Threading::IAsyncResult_ltvoid_ge {

    virtual void ~BackgroundTask();
    virtual void ~BackgroundTask();
    virtual void getStatus(void)const;
    virtual void getError(void)const;
    virtual void getException(void)const;
    virtual void cancel(void);
    virtual void addOnComplete(std::function<void ()(Bedrock::Threading::IAsyncResult<void> const&)>);
    virtual void invoke(void);
}
