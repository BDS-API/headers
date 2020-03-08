#pragma once



class ExecCtxNext : grpc_core::ExecCtx {

public:
    ExecCtxNext::~ExecCtxNext()
    virtual void CheckReadyToFinish();

    ExecCtxNext(void *);
};
