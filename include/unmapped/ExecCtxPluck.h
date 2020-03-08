#pragma once



class ExecCtxPluck : grpc_core::ExecCtx {

public:
    ExecCtxPluck::~ExecCtxPluck()
    virtual void CheckReadyToFinish();

    ExecCtxPluck(void *);
};
