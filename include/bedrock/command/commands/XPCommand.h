#pragma once

#include "../Command.h"


class XPCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~XPCommand();
    XPCommand();
    void setup(CommandRegistry &);
};
