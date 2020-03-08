#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class GetEduServerInfoCommand : Command {

public:
    virtual GetEduServerInfoCommand::~GetEduServerInfoCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetEduServerInfoCommand(void);
};
