#pragma once

class MeCommand : MessagingCommand {

public:
    virtual ~MeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void MeCommand(void);
};
