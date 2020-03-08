#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class SpawnPointCommand : Command {

public:
    SpawnPointCommand::~SpawnPointCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SpawnPointCommand(void);
};
