#pragma once

#include "ICommandDispatcher.h"


class CommandDispatcher : ICommandDispatcher {

public:
    virtual void performCommand(CommandOrigin const&, Command &);
    ~CommandDispatcher();
    CommandDispatcher();
};
