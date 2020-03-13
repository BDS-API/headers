#pragma once

#include <string>
#include <memory>
#include <functional>
#include "../Command.h"


class AgentCommand : Command {

public:
    ~AgentCommand(); // _ZN12AgentCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN12AgentCommand5setupER15CommandRegistry
    AgentCommand(); // _ZN12AgentCommandC2Ev
    void validateRange(Agent *, CommandOrigin const&, CommandOutput &); // _ZN12AgentCommand13validateRangeEP5AgentRK13CommandOriginR13CommandOutput
    void runAgentCommand(CommandOrigin const&, CommandOutput &, std::function<std::unique_ptr<AgentCommands::Command> (Player &)>)const; // _ZNK12AgentCommand15runAgentCommandERK13CommandOriginR13CommandOutputSt8functionIFSt10unique_ptrIN13AgentCommands7CommandESt14default_deleteIS8_EER6PlayerEE
    void reportSuccess(bool, CommandOutput &)const; // _ZNK12AgentCommand13reportSuccessEbR13CommandOutput
    std::string successName()const; // _ZNK12AgentCommand11successNameB5cxx11Ev
    std::string errorName()const; // _ZNK12AgentCommand9errorNameB5cxx11Ev
    void createAgent(Player &, CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand11createAgentER6PlayerRK13CommandOriginR13CommandOutput
    void setAgentOwner(Agent &, Player &)const; // _ZNK12AgentCommand13setAgentOwnerER5AgentR6Player
    void createAgentOutputSuccess(CommandOutput &, bool)const; // _ZNK12AgentCommand24createAgentOutputSuccessER13CommandOutputb
    void tpAgent(Player &, CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand7tpAgentER6PlayerRK13CommandOriginR13CommandOutput
    void itemCommand(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand11itemCommandERK13CommandOriginR13CommandOutput
    void transfer(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand8transferERK13CommandOriginR13CommandOutput
    void drop(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand4dropERK13CommandOriginR13CommandOutput
    void collect(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand7collectERK13CommandOriginR13CommandOutput
    void place(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand5placeERK13CommandOriginR13CommandOutput
    void directionCommand(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand16directionCommandERK13CommandOriginR13CommandOutput
    void setItem(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand7setItemERK13CommandOriginR13CommandOutput
    void getPosition(CommandOrigin const&, CommandOutput &)const; // _ZNK12AgentCommand11getPositionERK13CommandOriginR13CommandOutput
    bool isValidSlot(int)const; // _ZNK12AgentCommand11isValidSlotEi
};
