#pragma once

class CommandDispatcher : ICommandDispatcher {

    virtual ~CommandDispatcher();
    virtual ~CommandDispatcher();
    virtual void performCommand(CommandOrigin const&, Command &);
}
