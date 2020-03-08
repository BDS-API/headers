#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class DayLockCommand : Command {

public:
    virtual DayLockCommand::~DayLockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DayLockCommand(void);
};
