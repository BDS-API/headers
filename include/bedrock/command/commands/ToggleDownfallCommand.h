#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class ToggleDownfallCommand : Command {

public:
    ToggleDownfallCommand::~ToggleDownfallCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ToggleDownfallCommand(void);
};
