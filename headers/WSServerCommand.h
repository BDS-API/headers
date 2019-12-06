#pragma once

class WSServerCommand : Command {

public:
    virtual ~WSServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void WSServerCommand(void);
};
