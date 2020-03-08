#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class SpawnPointCommand : Command {

public:
    virtual SpawnPointCommand::~SpawnPointCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SpawnPointCommand(void);
};
