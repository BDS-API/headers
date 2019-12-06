#pragma once

class ListCommand : ServerCommand {

public:
    virtual ~ListCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ListCommand(void);
};
