#pragma once

#include "../orgin/CommandOrigin"
#include "../Command"


class CommandDispatcher : ICommandDispatcher {

public:
    CommandDispatcher::~CommandDispatcher()
    virtual void performCommand(CommandOrigin const&, Command &);

    CommandDispatcher(void);
};
