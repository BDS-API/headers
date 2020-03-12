#pragma once

#include <vector>


class GameRulesChangedPacketData {

public:
    void getRules()const;
    void setRules(std::vector<GameRule>);
    void reserve(unsigned int);
    GameRulesChangedPacketData();
    GameRulesChangedPacketData(GameRulesChangedPacketData &&);
    void addRule(GameRule const&);
    ~GameRulesChangedPacketData();
};
