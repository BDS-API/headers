#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class DifficultyCommand : Command {

public:
    virtual DifficultyCommand::~DifficultyCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DifficultyCommand(void);
};
