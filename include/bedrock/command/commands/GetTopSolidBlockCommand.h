#pragma once

class GetTopSolidBlockCommand : Command {

public:
    virtual GetTopSolidBlockCommand::~GetTopSolidBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetTopSolidBlockCommand(void);
};
