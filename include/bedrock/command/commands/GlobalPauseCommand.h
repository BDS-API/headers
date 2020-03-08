#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class GlobalPauseCommand : ServerCommand {

public:
    GlobalPauseCommand::~GlobalPauseCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GlobalPauseCommand(void);
};
