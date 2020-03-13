#pragma once

#include <string>
#include "../Command.h"


class GameRuleCommand : Command {

public:
    class InitProxy;

    ~GameRuleCommand(); // _ZN15GameRuleCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15GameRuleCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&); // _ZN15GameRuleCommand5setupER15CommandRegistryONS_9InitProxyE
    GameRuleCommand(); // _ZN15GameRuleCommandC2Ev
    void createJsonIndex(std::string const&, GameRule const&, Json::Value &, std::string *); // _ZN15GameRuleCommand15createJsonIndexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8GameRuleRN4Json5ValueEPS5_
    void setGameRule(CommandOrigin const&, CommandOutput &)const; // _ZNK15GameRuleCommand11setGameRuleERK13CommandOriginR13CommandOutput
    void getGameRule(CommandOrigin const&, CommandOutput &)const; // _ZNK15GameRuleCommand11getGameRuleERK13CommandOriginR13CommandOutput
    class InitProxy {

    public:
        InitProxy(Level &); // _ZN15GameRuleCommand9InitProxyC2ER5Level
        InitProxy(GameRules &); // _ZN15GameRuleCommand9InitProxyC2ER9GameRules
        void getGameRules(); // _ZN15GameRuleCommand9InitProxy12getGameRulesEv
    };
};
