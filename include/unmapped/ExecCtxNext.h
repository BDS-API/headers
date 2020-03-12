#pragma once



class ExecCtxNext /*grpc_core::ExecCtx*/ { //TODO: incomplete class definition

public:
    ~ExecCtxNext();
    virtual void CheckReadyToFinish();
    ExecCtxNext(void *);
};
