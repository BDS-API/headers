#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class SetWorldSpawnCommand : Command {

public:
    virtual SetWorldSpawnCommand::~SetWorldSpawnCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetWorldSpawnCommand(void);
};
