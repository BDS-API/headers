#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ReloadCommand : Command {

public:
    virtual ReloadCommand::~ReloadCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ReloadCommand(void);
};
