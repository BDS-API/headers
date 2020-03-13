#pragma once

#include <vector>


class GameRulesChangedPacketData {

public:
    GameRulesChangedPacketData(); // _ZN26GameRulesChangedPacketDataC2Ev
    ~GameRulesChangedPacketData(); // _ZN26GameRulesChangedPacketDataD2Ev
    GameRulesChangedPacketData(GameRulesChangedPacketData &&); // _ZN26GameRulesChangedPacketDataC2EOS_
    void addRule(GameRule const&); // _ZN26GameRulesChangedPacketData7addRuleERK8GameRule
    void getRules()const; // _ZNK26GameRulesChangedPacketData8getRulesEv
    void setRules(std::vector<GameRule>); // _ZN26GameRulesChangedPacketData8setRulesESt6vectorI8GameRuleSaIS1_EE
    void reserve(unsigned int); // _ZN26GameRulesChangedPacketData7reserveEj
};
