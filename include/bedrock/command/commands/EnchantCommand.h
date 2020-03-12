#pragma once

#include "../Command.h"


class EnchantCommand : Command {

public:
    ~EnchantCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    EnchantCommand();
    void setup(CommandRegistry &);
};
