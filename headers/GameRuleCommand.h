#pragma once

class GameRuleCommand : Command {

public:
    virtual ~GameRuleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&);
    void GameRuleCommand(void);
    void createJsonIndex(std::string const&, GameRule const&, Json::Value &, std::string*);
    void setGameRule(CommandOrigin const&, CommandOutput &)const;
    void getGameRule(CommandOrigin const&, CommandOutput &)const;
};
