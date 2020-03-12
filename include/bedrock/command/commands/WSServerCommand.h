#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class WSServerCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~WSServerCommand();
    void setup(CommandRegistry &);
    WSServerCommand();
};
