#pragma once

class GameRulesChangedPacketData {

public:

    void GameRulesChangedPacketData(void);
    void GameRulesChangedPacketData(GameRulesChangedPacketData&&);
    void addRule(GameRule const&);
    void getRules(void)const;
    void setRules(std::vector<GameRule, std::allocator<GameRule>>);
    void reserve(unsigned int);
};
