#pragma once

class CommandDispatcher : ICommandDispatcher {

    virtual void ~CommandDispatcher();
    virtual void ~CommandDispatcher();
    virtual void performCommand(CommandOrigin const&, Command &);
}
