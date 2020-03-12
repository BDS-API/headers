#pragma once

#include "../Command.h"


class GiveCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GiveCommand();
    void setup(CommandRegistry &);
    GiveCommand();
};
