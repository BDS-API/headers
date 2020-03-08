#pragma once

#include "../CommandRegistry"
#include "../../../unmapped/InitProxy"
#include "../Command"
#include "../CommandOutput"
#include "../orgin/CommandOrigin"


class MobEventCommand : Command {

public:
    virtual MobEventCommand::~MobEventCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    MobEventCommand(void);
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&);
};
