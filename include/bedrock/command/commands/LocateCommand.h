#pragma once

#include "../Command.h"


class LocateCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~LocateCommand();
    LocateCommand();
    void setup(CommandRegistry &);
};
