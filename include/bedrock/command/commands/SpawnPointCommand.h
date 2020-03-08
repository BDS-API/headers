#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class SpawnPointCommand : Command {

public:
    virtual SpawnPointCommand::~SpawnPointCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SpawnPointCommand(void);
};
