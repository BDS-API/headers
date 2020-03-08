#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class EnchantCommand : Command {

public:
    virtual EnchantCommand::~EnchantCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    EnchantCommand(void);
};
