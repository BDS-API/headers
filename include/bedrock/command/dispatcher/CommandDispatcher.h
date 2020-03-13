#pragma once

#include "ICommandDispatcher.h"


class CommandDispatcher : ICommandDispatcher {

public:
    ~CommandDispatcher(); // _ZN17CommandDispatcherD2Ev
    virtual void performCommand(CommandOrigin const&, Command &); // _ZN17CommandDispatcher14performCommandERK13CommandOriginR7Command
    CommandDispatcher(); // _ZN17CommandDispatcherC2Ev
};
