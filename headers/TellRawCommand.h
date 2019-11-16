#pragma once

class TellRawCommand : MessagingCommand {

    virtual ~TellRawCommand();
    virtual ~TellRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
