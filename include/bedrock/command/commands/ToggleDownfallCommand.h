#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class ToggleDownfallCommand : Command {

public:
    virtual ToggleDownfallCommand::~ToggleDownfallCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ToggleDownfallCommand(void);
};
