#pragma once

#include "../Command.h"


class SetBlockCommand : Command {

public:
    ~SetBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    SetBlockCommand();
};
