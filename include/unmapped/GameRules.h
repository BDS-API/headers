#pragma once

#include "GameRulesChangedPacketData.h"
#include <string>
#include "GameRule.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "GameRuleId.h"


class GameRules {

public:
    static long DEFAULT_RANDOMTICKSPEED;
    static long MAX_RANDOMTICKSPEED;
    static long MAX_FUNCTIONCOMMANDLIMIT;
    static long DEFAULT_PLAYER_SPAWN_RADIUS;
    static long MIN_PLAYER_SPAWN_RADIUS;
    static long MAX_PLAYER_SPAWN_RADIUS;

    GameRules();
    void createAllGameRulesPacket()const;
    void getBool(GameRuleId)const;
    void setTagData(CompoundTag &)const;
    void _registerEDURules();
    void setRule(GameRuleId, bool, bool, bool *, bool *, GameRule::ValidationError *);
    void setRule(GameRuleId, float, bool, bool *, bool *, GameRule::ValidationError *);
    GameRules(GameRules &&);
    void _validateRules();
    void deserializeRules(GameRulesChangedPacketData const&);
    void getTagData(CompoundTag const&);
    void _registerRules();
    void getRule(GameRuleId)const;
    void _registerRule(std::string const&, GameRuleId);
    void getFloat(GameRuleId)const;
    void nameToGameRuleIndex(std::string const&)const;
    void getInt(GameRuleId)const;
    void _createPacket(GameRule const&);
    void _getRule(GameRuleId);
    void _getMarketplaceGameRulesDefaultMap();
    void _validateMarketplaceGameRuleTypes();
    void getRules()const;
    void setMarketplaceOverrides();
    ~GameRules();
    bool hasRule(GameRuleId)const;
    GameRules(GameRules const&);
    void setRule(GameRuleId, int, bool, bool *, bool *, GameRule::ValidationError *);
//  void _setRule(GameRuleId, GameRule::Value, GameRule::Type, bool, bool *, bool *, GameRule::ValidationError *); //TODO: incomplete function definition
};
