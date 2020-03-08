#pragma once

#include "../orgin/CommandOrigin"
#include "../../../unmapped/InitProxy"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class MobEventCommand : Command {

public:
    MobEventCommand::~MobEventCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    MobEventCommand(void);
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&);
};
