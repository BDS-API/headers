#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class GetTopSolidBlockCommand : Command {

public:
    virtual GetTopSolidBlockCommand::~GetTopSolidBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetTopSolidBlockCommand(void);
};
