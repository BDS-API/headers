#pragma once

#include "../Command.h"


class ReplaceItemCommand : Command {

public:
    ~ReplaceItemCommand(); // _ZN18ReplaceItemCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK18ReplaceItemCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN18ReplaceItemCommand5setupER15CommandRegistry
    ReplaceItemCommand(); // _ZN18ReplaceItemCommandC2Ev
};
