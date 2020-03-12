#pragma once

#include "../Command.h"


class KillCommand : Command {

public:
    ~KillCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    KillCommand();
    void setup(CommandRegistry &);
};
