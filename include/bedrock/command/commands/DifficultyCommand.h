#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class DifficultyCommand : Command {

public:
    virtual DifficultyCommand::~DifficultyCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DifficultyCommand(void);
};
