#pragma once

#include "../Command.h"


class GetTopSolidBlockCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GetTopSolidBlockCommand();
    void setup(CommandRegistry &);
    GetTopSolidBlockCommand();
};
