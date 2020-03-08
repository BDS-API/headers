#pragma once



class ExecCtxPluck : grpc_core::ExecCtx {

public:
    virtual ExecCtxPluck::~ExecCtxPluck()
    virtual void CheckReadyToFinish();

    ExecCtxPluck(void *);
};
