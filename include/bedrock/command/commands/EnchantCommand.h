#pragma once

#include "../Command.h"


class EnchantCommand : Command {

public:
    ~EnchantCommand(); // _ZN14EnchantCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14EnchantCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14EnchantCommand5setupER15CommandRegistry
    EnchantCommand(); // _ZN14EnchantCommandC2Ev
};
