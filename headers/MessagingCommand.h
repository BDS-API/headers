#pragma once

class MessagingCommand : Command {

    virtual ~MessagingCommand();
    virtual ~MessagingCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
