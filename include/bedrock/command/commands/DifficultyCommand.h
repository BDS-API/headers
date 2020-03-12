#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class DifficultyCommand : Command {

public:
    ~DifficultyCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    DifficultyCommand();
    void setup(CommandRegistry &);
};
