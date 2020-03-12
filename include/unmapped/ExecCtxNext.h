#pragma once



class ExecCtxNext /*grpc_core::ExecCtx*/ { //TODO: incomplete class definition

public:
    virtual void CheckReadyToFinish();
    ~ExecCtxNext();
    ExecCtxNext(void *);
};
