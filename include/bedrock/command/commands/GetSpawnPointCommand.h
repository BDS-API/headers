#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class GetSpawnPointCommand : Command {

public:
    GetSpawnPointCommand::~GetSpawnPointCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetSpawnPointCommand(void);
};
