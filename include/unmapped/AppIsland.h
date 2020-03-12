#pragma once

#include "IIslandCore.h"


namespace BedrockEngine {

    class AppIsland : BedrockEngine::IIslandCore {

    public:
//      virtual bool processActivationArguments(ActivationArguments const&); //TODO: incomplete function definition
        ~AppIsland();
        virtual void suspend();
        virtual void stop();
        virtual void getId();
        virtual void start();
        virtual void resume();
        virtual void mainUpdate();
        AppIsland();
    };
}
