#pragma once

class ExecCtxPluck : grpc_core::ExecCtx {

public:
    virtual ~ExecCtxPluck();
    virtual void CheckReadyToFinish(void);

    void ExecCtxPluck(void *);
};
