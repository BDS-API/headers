#pragma once

#include <vector>
#include "GameRule.h"


class GameRulesChangedPacketData {

public:
    void setRules(std::vector<GameRule>);
    ~GameRulesChangedPacketData();
    GameRulesChangedPacketData(GameRulesChangedPacketData &&);
    void addRule(GameRule const&);
    GameRulesChangedPacketData();
    void reserve(unsigned int);
    void getRules()const;
};
