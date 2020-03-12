#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class GetEduServerInfoCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GetEduServerInfoCommand();
    GetEduServerInfoCommand();
    void setup(CommandRegistry &);
};
