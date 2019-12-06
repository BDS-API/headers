#pragma once

class DifficultyCommand : Command {

public:
    virtual ~DifficultyCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void DifficultyCommand(void);
};
