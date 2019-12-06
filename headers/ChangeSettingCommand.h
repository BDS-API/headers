#pragma once

class ChangeSettingCommand : ServerCommand {

public:
    virtual ~ChangeSettingCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ChangeSettingCommand(void);
};
