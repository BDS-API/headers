#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ListCommand : ServerCommand {

public:
    virtual ListCommand::~ListCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ListCommand(void);
};
