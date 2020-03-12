#pragma once

#include "../Command.h"


class FillCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~FillCommand();
    FillCommand();
    void setup(CommandRegistry &);
};
