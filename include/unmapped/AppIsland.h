#pragma once

#include "./IIslandCore.h"


namespace BedrockEngine {

class AppIsland : BedrockEngine::IIslandCore {

public:
    virtual ~AppIsland();
    virtual void getId();
    virtual void start();
    virtual void suspend();
    virtual void resume();
    virtual void stop();
    virtual void mainUpdate();
//  virtual bool processActivationArguments(ActivationArguments const&); //TODO: incomplete function definition

    AppIsland();
};

}