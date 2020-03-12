#pragma once

#include "../Command.h"


class TimeCommand : Command {

public:
    ~TimeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    TimeCommand();
};
