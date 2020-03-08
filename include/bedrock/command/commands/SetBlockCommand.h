#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class SetBlockCommand : Command {

public:
    virtual SetBlockCommand::~SetBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetBlockCommand(void);
};
