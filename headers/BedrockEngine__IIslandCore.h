#pragma once

class BedrockEngine::IIslandCore {

    virtual ~IIslandCore();
    virtual ~IIslandCore();
    virtual void getId(void);
    virtual void start(void);
    virtual void suspend(void);
    virtual void resume(void);
    virtual void stop(void);
    virtual void mainUpdate(void);
    virtual void processActivationArguments(ActivationArguments const&);
}
