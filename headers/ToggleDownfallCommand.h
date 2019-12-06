#pragma once

class ToggleDownfallCommand : Command {

public:
    virtual ~ToggleDownfallCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ToggleDownfallCommand(void);
};
