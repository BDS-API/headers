#pragma once

#include "../Command.h"


class WSServerCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~WSServerCommand();
    void setup(CommandRegistry &);
    WSServerCommand();
};
