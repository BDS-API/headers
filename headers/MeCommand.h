#pragma once

class MeCommand : MessagingCommand {

    virtual void ~MeCommand();
    virtual void ~MeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
