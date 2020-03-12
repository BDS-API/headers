#pragma once

#include "../Command.h"


class GetEduServerInfoCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GetEduServerInfoCommand();
    GetEduServerInfoCommand();
    void setup(CommandRegistry &);
};
