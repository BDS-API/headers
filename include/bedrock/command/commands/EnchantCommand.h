#pragma once

class EnchantCommand : Command {

public:
    virtual EnchantCommand::~EnchantCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    EnchantCommand(void);
};
