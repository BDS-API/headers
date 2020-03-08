#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandRegistry"


class SayCommand : MessagingCommand {

public:
    virtual SayCommand::~SayCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SayCommand(void);
};
