#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class SetWorldSpawnCommand : Command {

public:
    SetWorldSpawnCommand::~SetWorldSpawnCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetWorldSpawnCommand(void);
};
