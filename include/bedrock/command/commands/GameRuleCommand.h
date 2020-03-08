#pragma once

#include "../CommandRegistry"
#include "../Command"
#include "../CommandOutput"
#include "../../../unmapped/InitProxy"
#include "../../../unmapped/GameRule"
#include "../orgin/CommandOrigin"
#include "../../../json/Value"


class GameRuleCommand : Command {

public:
    virtual GameRuleCommand::~GameRuleCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&);
    GameRuleCommand(void);
    void createJsonIndex(std::string const&, GameRule const&, Json::Value &, std::string*);
    void setGameRule(CommandOrigin const&, CommandOutput &)const;
    void getGameRule(CommandOrigin const&, CommandOutput &)const;
};
