#pragma once

class ExecCtxPluck : grpc_core::ExecCtx {

public:
    virtual ExecCtxPluck::~ExecCtxPluck();
    virtual void CheckReadyToFinish(void);

    ExecCtxPluck(void *);
};
