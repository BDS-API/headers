#pragma once

class ExecCtxNext : grpc_core::ExecCtx {

public:
    virtual ~ExecCtxNext();
    virtual void CheckReadyToFinish(void);

    void ExecCtxNext(void *);
};
