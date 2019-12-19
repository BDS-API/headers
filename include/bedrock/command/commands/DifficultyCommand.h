#pragma once

class DifficultyCommand : Command {

public:
    virtual DifficultyCommand::~DifficultyCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DifficultyCommand(void);
};
