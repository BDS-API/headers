#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ToggleDownfallCommand : Command {

public:
    virtual ToggleDownfallCommand::~ToggleDownfallCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ToggleDownfallCommand(void);
};
