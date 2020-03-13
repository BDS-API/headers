#pragma once

#include "IIslandCore.h"


namespace BedrockEngine {

    class AppIsland : BedrockEngine::IIslandCore {

    public:
        ~AppIsland(); // _ZN13BedrockEngine9AppIslandD2Ev
        virtual void getId(); // _ZN13BedrockEngine9AppIsland5getIdEv
        virtual void start(); // _ZN13BedrockEngine9AppIsland5startEv
        virtual void suspend(); // _ZN13BedrockEngine9AppIsland7suspendEv
        virtual void resume(); // _ZN13BedrockEngine9AppIsland6resumeEv
        virtual void stop(); // _ZN13BedrockEngine9AppIsland4stopEv
        virtual void mainUpdate(); // _ZN13BedrockEngine9AppIsland10mainUpdateEv
//      virtual bool processActivationArguments(ActivationArguments const&); //TODO: incomplete function definition // _ZN13BedrockEngine9AppIsland26processActivationArgumentsERK19ActivationArguments
        AppIsland(); // _ZN13BedrockEngine9AppIslandC2Ev
    };
}
