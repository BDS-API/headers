#pragma once

class GameModeCommand : Command {

public:
    virtual ~GameModeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GameModeCommand(void);
};
