#pragma once

class SayCommand : MessagingCommand {

    virtual ~SayCommand();
    virtual ~SayCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
