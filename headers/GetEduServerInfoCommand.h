#pragma once

class GetEduServerInfoCommand : Command {

public:
    virtual ~GetEduServerInfoCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GetEduServerInfoCommand(void);
};
