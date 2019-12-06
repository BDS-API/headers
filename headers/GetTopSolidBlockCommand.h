#pragma once

class GetTopSolidBlockCommand : Command {

public:
    virtual ~GetTopSolidBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GetTopSolidBlockCommand(void);
};
