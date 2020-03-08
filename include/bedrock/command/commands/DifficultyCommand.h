#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class DifficultyCommand : Command {

public:
    DifficultyCommand::~DifficultyCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DifficultyCommand(void);
};
