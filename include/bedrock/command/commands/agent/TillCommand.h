#pragma once

#include <string>
#include "../../Command.h"


namespace AgentCommands {

    class TillCommand : public AgentCommands::Command {

    public:
        virtual ~TillCommand(); // _ZN13AgentCommands11TillCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands11TillCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands11TillCommand6isDoneEv
//        TillCommand(Player &, std::string, long); //TODO: incomplete function definition // _ZN13AgentCommands11TillCommandC2ER6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_9DirectionE
    };
}
