#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ChangeSettingCommand : ServerCommand {

public:
    virtual ChangeSettingCommand::~ChangeSettingCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ChangeSettingCommand(void);
};
