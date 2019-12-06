#pragma once

class ReloadCommand : Command {

public:
    virtual ~ReloadCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ReloadCommand(void);
};
