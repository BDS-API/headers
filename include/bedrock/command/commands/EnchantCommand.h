#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class EnchantCommand : Command {

public:
    EnchantCommand::~EnchantCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    EnchantCommand(void);
};
