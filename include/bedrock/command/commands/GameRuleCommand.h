#pragma once

#include <string>
#include "../Command.h"


class GameRuleCommand : Command {

public:
    class InitProxy;

    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GameRuleCommand();
    GameRuleCommand();
    void createJsonIndex(std::string const&, GameRule const&, Json::Value &, std::string *);
    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&);
    void setGameRule(CommandOrigin const&, CommandOutput &)const;
    void getGameRule(CommandOrigin const&, CommandOutput &)const;
    class InitProxy {

    public:
        InitProxy(GameRules &);
        InitProxy(Level &);
        void getGameRules();
    };
};
