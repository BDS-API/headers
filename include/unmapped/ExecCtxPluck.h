#pragma once



class ExecCtxPluck /*grpc_core::ExecCtx*/ { //TODO: incomplete class definition

public:
    ~ExecCtxPluck();
    virtual void CheckReadyToFinish();
    ExecCtxPluck(void *);
};
