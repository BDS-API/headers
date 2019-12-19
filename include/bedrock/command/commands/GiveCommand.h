#pragma once

class GiveCommand : Command {

public:
    virtual GiveCommand::~GiveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GiveCommand(void);
};
