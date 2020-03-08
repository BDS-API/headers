#pragma once

#include "../orgin/CommandOrigin"
#include "../../../json/Value"
#include "../../../unmapped/GameRule"
#include "../CommandOutput"
#include "../Command"
#include "../../../unmapped/InitProxy"
#include "../CommandRegistry"


class GameRuleCommand : Command {

public:
    GameRuleCommand::~GameRuleCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&);
    GameRuleCommand(void);
    void createJsonIndex(std::string const&, GameRule const&, Json::Value &, std::string*);
    void setGameRule(CommandOrigin const&, CommandOutput &)const;
    void getGameRule(CommandOrigin const&, CommandOutput &)const;
};
