#pragma once

class EnchantCommand : Command {

public:
    virtual ~EnchantCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void EnchantCommand(void);
};
