#pragma once

class ICommandDispatcher {

    virtual ~ICommandDispatcher();
    virtual ~ICommandDispatcher();
    virtual void performCommand(CommandOrigin const&, Command &);
}
