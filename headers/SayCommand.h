#pragma once

class SayCommand : MessagingCommand {

public:
    virtual ~SayCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void SayCommand(void);
};
