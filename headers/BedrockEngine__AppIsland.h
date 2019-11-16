#pragma once

class BedrockEngine::AppIsland : BedrockEngine::IIslandCore {

    virtual void ~AppIsland();
    virtual void ~AppIsland();
    virtual void getId(void);
    virtual void start(void);
    virtual void suspend(void);
    virtual void resume(void);
    virtual void stop(void);
    virtual void mainUpdate(void);
    virtual void processActivationArguments(ActivationArguments const&);
}
