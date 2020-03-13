#pragma once

#include <string>
#include "GameRuleId.h"
#include "GameRule.h"


class GameRules {

public:
    static long DEFAULT_RANDOMTICKSPEED;
    static long MAX_RANDOMTICKSPEED;
    static long MAX_FUNCTIONCOMMANDLIMIT;
    static long DEFAULT_PLAYER_SPAWN_RADIUS;
    static long MIN_PLAYER_SPAWN_RADIUS;
    static long MAX_PLAYER_SPAWN_RADIUS;

    ~GameRules(); // _ZN9GameRulesD2Ev
    GameRules(GameRules const&); // _ZN9GameRulesC2ERKS_
    GameRules(GameRules &&); // _ZN9GameRulesC2EOS_
    void getRules()const; // _ZNK9GameRules8getRulesEv
    void getRule(GameRuleId)const; // _ZNK9GameRules7getRuleE10GameRuleId
    bool hasRule(GameRuleId)const; // _ZNK9GameRules7hasRuleE10GameRuleId
    GameRules(); // _ZN9GameRulesC2Ev
    void _registerRules(); // _ZN9GameRules14_registerRulesEv
    void _validateRules(); // _ZN9GameRules14_validateRulesEv
    void _validateMarketplaceGameRuleTypes(); // _ZN9GameRules33_validateMarketplaceGameRuleTypesEv
    void createAllGameRulesPacket()const; // _ZNK9GameRules24createAllGameRulesPacketEv
    void deserializeRules(GameRulesChangedPacketData const&); // _ZN9GameRules16deserializeRulesERK26GameRulesChangedPacketData
    void nameToGameRuleIndex(std::string const&)const; // _ZNK9GameRules19nameToGameRuleIndexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setRule(GameRuleId, bool, bool, bool *, bool *, GameRule::ValidationError *); // _ZN9GameRules7setRuleE10GameRuleIdbbPbS1_PN8GameRule15ValidationErrorE
    void setRule(GameRuleId, int, bool, bool *, bool *, GameRule::ValidationError *); // _ZN9GameRules7setRuleE10GameRuleIdibPbS1_PN8GameRule15ValidationErrorE
    void setRule(GameRuleId, float, bool, bool *, bool *, GameRule::ValidationError *); // _ZN9GameRules7setRuleE10GameRuleIdfbPbS1_PN8GameRule15ValidationErrorE
    void _registerRule(std::string const&, GameRuleId); // _ZN9GameRules13_registerRuleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE10GameRuleId
//  void _setRule(GameRuleId, GameRule::Value, GameRule::Type, bool, bool *, bool *, GameRule::ValidationError *); //TODO: incomplete function definition // _ZN9GameRules8_setRuleE10GameRuleIdN8GameRule5ValueENS1_4TypeEbPbS4_PNS1_15ValidationErrorE
    void _getRule(GameRuleId); // _ZN9GameRules8_getRuleE10GameRuleId
    void _createPacket(GameRule const&); // _ZN9GameRules13_createPacketERK8GameRule
    void getBool(GameRuleId)const; // _ZNK9GameRules7getBoolE10GameRuleId
    void getInt(GameRuleId)const; // _ZNK9GameRules6getIntE10GameRuleId
    void getFloat(GameRuleId)const; // _ZNK9GameRules8getFloatE10GameRuleId
    void setTagData(CompoundTag &)const; // _ZNK9GameRules10setTagDataER11CompoundTag
    void getTagData(CompoundTag const&); // _ZN9GameRules10getTagDataERK11CompoundTag
    void setMarketplaceOverrides(); // _ZN9GameRules23setMarketplaceOverridesEv
    void _getMarketplaceGameRulesDefaultMap(); // _ZN9GameRules34_getMarketplaceGameRulesDefaultMapEv
    void _registerEDURules(); // _ZN9GameRules17_registerEDURulesEv
};
