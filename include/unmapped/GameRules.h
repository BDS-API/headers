#pragma once

#include "./ValidationError.h"
#include "./GameRuleId.h"
#include "./GameRules.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./GameRulesChangedPacketData.h"
#include "./Value.h"
#include "./GameRule.h"
#include <string>


class GameRules {

public:
    static long DEFAULT_RANDOMTICKSPEED;
    static long MAX_RANDOMTICKSPEED;
    static long MAX_FUNCTIONCOMMANDLIMIT;
    static long DEFAULT_PLAYER_SPAWN_RADIUS;
    static long MIN_PLAYER_SPAWN_RADIUS;
    static long MAX_PLAYER_SPAWN_RADIUS;


    ~GameRules();
    GameRules(GameRules const&);
    GameRules(GameRules &&);
    void getRules()const;
    void getRule(GameRuleId)const;
    bool hasRule(GameRuleId)const;
    GameRules();
    void _registerRules();
    void _validateRules();
    void _validateMarketplaceGameRuleTypes();
    void createAllGameRulesPacket()const;
    void deserializeRules(GameRulesChangedPacketData const&);
    void nameToGameRuleIndex(std::string const&)const;
    void setRule(GameRuleId, bool, bool, bool *, bool *, GameRule::ValidationError *);
    void setRule(GameRuleId, int, bool, bool *, bool *, GameRule::ValidationError *);
    void setRule(GameRuleId, float, bool, bool *, bool *, GameRule::ValidationError *);
    void _registerRule(std::string const&, GameRuleId);
//  void _setRule(GameRuleId, GameRule::Value, GameRule::Type, bool, bool *, bool *, GameRule::ValidationError *); //TODO: incomplete function definition
    void _getRule(GameRuleId);
    void _createPacket(GameRule const&);
    void getBool(GameRuleId)const;
    void getInt(GameRuleId)const;
    void getFloat(GameRuleId)const;
    void setTagData(CompoundTag &)const;
    void getTagData(CompoundTag const&);
    void setMarketplaceOverrides();
    void _getMarketplaceGameRulesDefaultMap();
    void _registerEDURules();
};
