#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class GetTopSolidBlockCommand : Command {

public:
    GetTopSolidBlockCommand::~GetTopSolidBlockCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetTopSolidBlockCommand(void);
};
