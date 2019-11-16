#pragma once

class TellCommand : MessagingCommand {

    virtual void ~TellCommand();
    virtual void ~TellCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
