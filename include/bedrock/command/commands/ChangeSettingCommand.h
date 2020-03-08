#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class ChangeSettingCommand : ServerCommand {

public:
    ChangeSettingCommand::~ChangeSettingCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ChangeSettingCommand(void);
};
