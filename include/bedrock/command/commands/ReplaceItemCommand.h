#pragma once

#include "../Command.h"


class ReplaceItemCommand : public Command {

public:
    virtual ~ReplaceItemCommand(); // _ZN18ReplaceItemCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK18ReplaceItemCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN18ReplaceItemCommand5setupER15CommandRegistry
    ReplaceItemCommand(); // _ZN18ReplaceItemCommandC2Ev
};
