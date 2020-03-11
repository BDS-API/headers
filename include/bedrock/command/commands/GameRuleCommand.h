#pragma once

#include "../CommandRegistry.h"
#include "../../../unmapped/InitProxy.h"
#include "../CommandOutput.h"
#include "../../../unmapped/GameRule.h"
#include "../../../json/Value.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include <string>


class GameRuleCommand : Command {

public:
    virtual ~GameRuleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&);
    GameRuleCommand();
    void createJsonIndex(std::string const&, GameRule const&, Json::Value &, std::string *);
    void setGameRule(CommandOrigin const&, CommandOutput &)const;
    void getGameRule(CommandOrigin const&, CommandOutput &)const;
};
