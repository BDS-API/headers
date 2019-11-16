#pragma once

class MeCommand : MessagingCommand {

    virtual ~MeCommand();
    virtual ~MeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
