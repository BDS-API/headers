#pragma once

#include "../Command.h"


class DifficultyCommand : Command {

public:
    ~DifficultyCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    DifficultyCommand();
};
