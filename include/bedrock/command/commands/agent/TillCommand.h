#pragma once

#include <string>
#include "../../Command.h"


namespace AgentCommands {

    class TillCommand : AgentCommands::Command {

    public:
        ~TillCommand(); // _ZN13AgentCommands11TillCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands11TillCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands11TillCommand6isDoneEv
//      TillCommand(Player &, std::string, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands11TillCommandC2ER6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_9DirectionE
    };
}
