#pragma once

class TellRawCommand : MessagingCommand {

    virtual void ~TellRawCommand();
    virtual void ~TellRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
