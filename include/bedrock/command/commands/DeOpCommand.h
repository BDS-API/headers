#pragma once

#include "../CommandOutput"
#include "../orgin/CommandOrigin"
#include "../CommandRegistry"


class DeOpCommand : ServerCommand {

public:
    virtual DeOpCommand::~DeOpCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DeOpCommand(void);
};
