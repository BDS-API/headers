#pragma once

class ICommandDispatcher {

    virtual void ~ICommandDispatcher();
    virtual void ~ICommandDispatcher();
    virtual void performCommand(CommandOrigin const&, Command &);
}
