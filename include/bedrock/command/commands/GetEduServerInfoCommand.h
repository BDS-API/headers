#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class GetEduServerInfoCommand : Command {

public:
    GetEduServerInfoCommand::~GetEduServerInfoCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetEduServerInfoCommand(void);
};
