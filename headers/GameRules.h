#pragma once

class GameRules {

public:
    static long GameRules::DEFAULT_RANDOMTICKSPEED;
    static long GameRules::MAX_RANDOMTICKSPEED;
    static long GameRules::MAX_FUNCTIONCOMMANDLIMIT;
    static long GameRules::DEFAULT_PLAYER_SPAWN_RADIUS;
    static long GameRules::MIN_PLAYER_SPAWN_RADIUS;
    static long GameRules::MAX_PLAYER_SPAWN_RADIUS;


    void GameRules(GameRules const&);
    void GameRules(GameRules&&);
    void getRules(void)const;
    void getRule(GameRuleId)const;
    bool hasRule(GameRuleId)const;
    void GameRules(void);
    void _registerRules(void);
    void _validateRules(void);
    void _validateMarketplaceGameRuleTypes(void);
    void createAllGameRulesPacket(void)const;
    void deserializeRules(GameRulesChangedPacketData const&);
    void nameToGameRuleIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void setRule(GameRuleId, bool, bool, bool *, GameRule::ValidationError *);
    void setRule(GameRuleId, int, bool, bool *, GameRule::ValidationError *);
    void setRule(GameRuleId, float, bool, bool *, GameRule::ValidationError *);
    void _registerRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, GameRuleId);
    void _setRule(GameRuleId, GameRule::Value, GameRule::Type, bool, bool *, GameRule::ValidationError *);
    void _getRule(GameRuleId);
    void _createPacket(GameRule const&);
    void getBool(GameRuleId)const;
    void getInt(GameRuleId)const;
    void getFloat(GameRuleId)const;
    void setTagData(CompoundTag &)const;
    void getTagData(CompoundTag const&);
    void setMarketplaceOverrides(void);
    void _getMarketplaceGameRulesDefaultMap(void);
    void _registerEDURules(void);
};
