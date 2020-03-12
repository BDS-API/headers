#pragma once

#include "Ability.h"
#include <functional>
#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class Abilities {

public:
    static long ABILITY_NAMES;
    static std::string TAG;

    void operator==(Abilities const&)const;
//  void getCustomAbilityFromCache(AbilitiesIndex)const; //TODO: incomplete function definition
//  void _registerAbility(AbilitiesIndex, Ability const&); //TODO: incomplete function definition
    Abilities();
//  void setAbility(AbilitiesIndex, bool); //TODO: incomplete function definition
    void _resetCustomAbilities();
//  void setAbility(AbilitiesIndex, Ability const&); //TODO: incomplete function definition
//  void getFloat(AbilitiesIndex)const; //TODO: incomplete function definition
//  void setAbility(AbilitiesIndex, float); //TODO: incomplete function definition
    void nameToAbilityIndex(std::string const&);
//  void getCustomAbilityFromCache(AbilitiesIndex); //TODO: incomplete function definition
    void addSaveData(CompoundTag &)const;
    void _registerAbilities();
//  void setPlayerPermissions(PlayerPermissionLevel); //TODO: incomplete function definition
    void loadSaveData(CompoundTag const&);
    void _resetAbilities();
//  void setCommandPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    void _initAbilities();
//  void getBool(AbilitiesIndex)const; //TODO: incomplete function definition
    Abilities(Abilities const&);
    bool isOperator()const;
    void onSwitchToCustom();
    void operator!=(Abilities const&)const;
//  void forEachAbility(std::function<void (Ability &, char const*)> const&, Ability::Options); //TODO: incomplete function definition
//  void getAbility(AbilitiesIndex); //TODO: incomplete function definition
//  void getAbilityName(AbilitiesIndex); //TODO: incomplete function definition
//  void forEachAbility(std::function<void (Ability const&, char const*)> const&, Ability::Options)const; //TODO: incomplete function definition
//  void _setCustomCachedAbility(AbilitiesIndex); //TODO: incomplete function definition
    bool isFlying()const;
    ~Abilities();
//  void getAbility(AbilitiesIndex)const; //TODO: incomplete function definition
//  void setAbilityDiff(AbilitiesIndex, bool, bool &); //TODO: incomplete function definition
    void getPlayerPermissions()const;
    void getCommandPermissions()const;
};
