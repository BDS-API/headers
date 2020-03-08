#pragma once

#include "../orgin/CommandOrigin"


class CommandDispatcher : ICommandDispatcher {

public:
    virtual CommandDispatcher::~CommandDispatcher();
    virtual void performCommand(CommandOrigin const&, Command &);

    CommandDispatcher(void);
};
