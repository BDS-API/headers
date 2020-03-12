#pragma once

#include "IIslandCore.h"


namespace BedrockEngine {

    class AppIsland : BedrockEngine::IIslandCore {

    public:
        virtual void suspend();
        virtual void mainUpdate();
        virtual void resume();
        ~AppIsland();
        virtual void start();
//      virtual bool processActivationArguments(ActivationArguments const&); //TODO: incomplete function definition
        virtual void getId();
        virtual void stop();
        AppIsland();
    };
}
