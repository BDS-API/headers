#pragma once



class ExecCtxPluck /*grpc_core::ExecCtx*/ { //TODO: incomplete class definition

public:
    virtual void CheckReadyToFinish();
    ~ExecCtxPluck();
    ExecCtxPluck(void *);
};
