#pragma once

#include "./GameRulesChangedPacketData.h"
#include <memory>
#include "./GameRule.h"
#include <vector>


class GameRulesChangedPacketData {

public:

    GameRulesChangedPacketData();
    ~GameRulesChangedPacketData();
    GameRulesChangedPacketData(GameRulesChangedPacketData &&);
    void addRule(GameRule const&);
    void getRules()const;
    void setRules(std::vector<GameRule, std::allocator<GameRule>>);
    void reserve(unsigned int);
};
