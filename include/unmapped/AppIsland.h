#pragma once



using namespace BedrockEngine;

class AppIsland : BedrockEngine::IIslandCore {

public:
    virtual void BedrockEngine::AppIsland::~AppIsland();
    virtual void getId(void);
    virtual void start(void);
    virtual void suspend(void);
    virtual void resume(void);
    virtual void stop(void);
    virtual void mainUpdate(void);
    virtual bool processActivationArguments(ActivationArguments const&);

    AppIsland(void);
};
