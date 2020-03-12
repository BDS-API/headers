#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class EnchantCommand : Command {

public:
    ~EnchantCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    EnchantCommand();
    void setup(CommandRegistry &);
};
