#pragma once

class TellCommand : MessagingCommand {

    virtual ~TellCommand();
    virtual ~TellCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
