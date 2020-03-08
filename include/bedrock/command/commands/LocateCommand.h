#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class LocateCommand : Command {

public:
    virtual LocateCommand::~LocateCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    LocateCommand(void);
};
