#pragma once

class ListDCommand : ServerCommand {

public:
    virtual ListDCommand::~ListDCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ListDCommand(void);
};
