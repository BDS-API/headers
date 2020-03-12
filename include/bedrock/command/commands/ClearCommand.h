#pragma once

#include "../Command.h"


class ClearCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ClearCommand();
    void setup(CommandRegistry &);
    ClearCommand();
};
