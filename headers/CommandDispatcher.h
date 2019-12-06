#pragma once

class CommandDispatcher : ICommandDispatcher {

public:
    virtual ~CommandDispatcher();
    virtual void performCommand(CommandOrigin const&, Command &);

    void CommandDispatcher(void);
};
