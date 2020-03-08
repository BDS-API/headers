#pragma once



class GameRulesChangedPacketData {

public:

    GameRulesChangedPacketData(void);
    GameRulesChangedPacketData(GameRulesChangedPacketData&&);
    void addRule(GameRule const&);
    void getRules()const;
    void setRules(std::vector<GameRule, std::allocator<GameRule>>);
    void reserve(unsigned int);
};
