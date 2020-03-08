#pragma once



using namespace BedrockEngine;

class AppIsland : BedrockEngine::IIslandCore {

public:
    virtual BedrockEngine::AppIsland::~AppIsland()
    virtual void getId();
    virtual void start();
    virtual void suspend();
    virtual void resume();
    virtual void stop();
    virtual void mainUpdate();
    virtual bool processActivationArguments(ActivationArguments const&);

    AppIsland(void);
};
