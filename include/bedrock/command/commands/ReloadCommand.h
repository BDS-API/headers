#pragma once

#include "../Command.h"


class ReloadCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ReloadCommand();
    void setup(CommandRegistry &);
    ReloadCommand();
};
