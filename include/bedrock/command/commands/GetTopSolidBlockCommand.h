#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class GetTopSolidBlockCommand : Command {

public:
    virtual GetTopSolidBlockCommand::~GetTopSolidBlockCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetTopSolidBlockCommand(void);
};
