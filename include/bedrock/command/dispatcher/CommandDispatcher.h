#pragma once

#include "./ICommandDispatcher.h"
#include "../orgin/CommandOrigin.h"
#include "../Command.h"


class CommandDispatcher : ICommandDispatcher {

public:
    virtual ~CommandDispatcher();
    virtual void performCommand(CommandOrigin const&, Command &);

    CommandDispatcher();
};
