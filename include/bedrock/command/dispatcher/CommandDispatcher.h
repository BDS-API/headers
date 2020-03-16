#pragma once

#include "ICommandDispatcher.h"


class CommandDispatcher : public ICommandDispatcher {

public:
    virtual ~CommandDispatcher(); // _ZN17CommandDispatcherD2Ev
    virtual void __fake_function0(); // fake
    virtual void performCommand(CommandOrigin const&, Command &); // _ZN17CommandDispatcher14performCommandERK13CommandOriginR7Command
    CommandDispatcher(); // _ZN17CommandDispatcherC2Ev
};
