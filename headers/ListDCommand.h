#pragma once

class ListDCommand : ServerCommand {

public:
    virtual ~ListDCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ListDCommand(void);
};
