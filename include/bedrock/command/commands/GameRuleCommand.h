#pragma once

#include <string>
#include "../../level/Level.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../../../unmapped/GameRule.h"
#include "../../../json/Value.h"
#include "../Command.h"
#include "../CommandOutput.h"
#include "../../../unmapped/GameRules.h"


class GameRuleCommand : Command {

public:
    class InitProxy;

    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GameRuleCommand();
    void getGameRule(CommandOrigin const&, CommandOutput &)const;
    void setGameRule(CommandOrigin const&, CommandOutput &)const;
    void createJsonIndex(std::string const&, GameRule const&, Json::Value &, std::string *);
    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&);
    GameRuleCommand();
    class InitProxy {

    public:
        InitProxy(Level &);
        InitProxy(GameRules &);
        void getGameRules();
    };
};
