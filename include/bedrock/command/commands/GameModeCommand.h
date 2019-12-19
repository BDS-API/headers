#pragma once

class GameModeCommand : Command {

public:
    virtual GameModeCommand::~GameModeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GameModeCommand(void);
};
