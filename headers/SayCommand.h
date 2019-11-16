#pragma once

class SayCommand : MessagingCommand {

    virtual void ~SayCommand();
    virtual void ~SayCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
