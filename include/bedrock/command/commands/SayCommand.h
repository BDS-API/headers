#pragma once

class SayCommand : MessagingCommand {

public:
    virtual SayCommand::~SayCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SayCommand(void);
};
