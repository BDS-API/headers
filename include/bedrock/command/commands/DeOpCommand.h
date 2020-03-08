#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class DeOpCommand : ServerCommand {

public:
    DeOpCommand::~DeOpCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DeOpCommand(void);
};
