#pragma once

#include "../origin/CommandOrigin.h"
#include "../Command.h"
#include "ICommandDispatcher.h"


class CommandDispatcher : ICommandDispatcher {

public:
    virtual void performCommand(CommandOrigin const&, Command &);
    ~CommandDispatcher();
    CommandDispatcher();
};
