#pragma once

#include <string>
#include "GameRule.h"
#include "GameRuleId.h"


class GameRules {

public:
    static long DEFAULT_RANDOMTICKSPEED;
    static long MAX_RANDOMTICKSPEED;
    static long MAX_FUNCTIONCOMMANDLIMIT;
    static long DEFAULT_PLAYER_SPAWN_RADIUS;
    static long MIN_PLAYER_SPAWN_RADIUS;
    static long MAX_PLAYER_SPAWN_RADIUS;

    void _createPacket(GameRule const&);
    GameRules(GameRules &&);
    void setRule(GameRuleId, float, bool, bool *, bool *, GameRule::ValidationError *);
    void getRules()const;
    void getTagData(CompoundTag const&);
    void getInt(GameRuleId)const;
    void setTagData(CompoundTag &)const;
    void setRule(GameRuleId, bool, bool, bool *, bool *, GameRule::ValidationError *);
    void nameToGameRuleIndex(std::string const&)const;
    GameRules(GameRules const&);
    void _registerEDURules();
    void setRule(GameRuleId, int, bool, bool *, bool *, GameRule::ValidationError *);
    bool hasRule(GameRuleId)const;
    void getRule(GameRuleId)const;
    void _registerRules();
//  void _setRule(GameRuleId, GameRule::Value, GameRule::Type, bool, bool *, bool *, GameRule::ValidationError *); //TODO: incomplete function definition
    void getBool(GameRuleId)const;
    void _registerRule(std::string const&, GameRuleId);
    void deserializeRules(GameRulesChangedPacketData const&);
    ~GameRules();
    void setMarketplaceOverrides();
    void createAllGameRulesPacket()const;
    void _validateRules();
    GameRules();
    void _validateMarketplaceGameRuleTypes();
    void _getMarketplaceGameRulesDefaultMap();
    void _getRule(GameRuleId);
    void getFloat(GameRuleId)const;
};
