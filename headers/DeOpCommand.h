#pragma once

class DeOpCommand : ServerCommand {

public:
    virtual ~DeOpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void DeOpCommand(void);
};
