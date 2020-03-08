#pragma once



class ExecCtxNext : grpc_core::ExecCtx {

public:
    virtual ExecCtxNext::~ExecCtxNext()
    virtual void CheckReadyToFinish();

    ExecCtxNext(void *);
};
