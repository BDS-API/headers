#pragma once

class SetMaxPlayersCommand : ServerCommand {

public:
    virtual ~SetMaxPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void SetMaxPlayersCommand(void);
};
