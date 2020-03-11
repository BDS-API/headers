#pragma once

#include "./Ability.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./Abilities.h"
#include <functional>
#include <string>


class Abilities {

public:
    static long ABILITY_NAMES;
    static std::string TAG;


    ~Abilities();
    Abilities();
    void _initAbilities();
    void _registerAbilities();
//  void setPlayerPermissions(PlayerPermissionLevel); //TODO: incomplete function definition
    Abilities(Abilities const&);
    void operator==(Abilities const&)const;
    void operator!=(Abilities const&)const;
    void addSaveData(CompoundTag &)const;
//  void forEachAbility(std::function<void (Ability const&, char const*)> const&, Ability::Options)const; //TODO: incomplete function definition
    void loadSaveData(CompoundTag const&);
//  void forEachAbility(std::function<void (Ability &, char const*)> const&, Ability::Options); //TODO: incomplete function definition
//  void setAbility(AbilitiesIndex, bool); //TODO: incomplete function definition
    bool isFlying()const;
//  void getBool(AbilitiesIndex)const; //TODO: incomplete function definition
    void getCommandPermissions()const;
//  void setCommandPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    bool isOperator()const;
    void getPlayerPermissions()const;
//  void _setCustomCachedAbility(AbilitiesIndex); //TODO: incomplete function definition
    void _resetCustomAbilities();
    void _resetAbilities();
//  void getAbility(AbilitiesIndex); //TODO: incomplete function definition
//  void setAbilityDiff(AbilitiesIndex, bool, bool &); //TODO: incomplete function definition
//  void setAbility(AbilitiesIndex, float); //TODO: incomplete function definition
//  void setAbility(AbilitiesIndex, Ability const&); //TODO: incomplete function definition
//  void getAbility(AbilitiesIndex)const; //TODO: incomplete function definition
//  void getFloat(AbilitiesIndex)const; //TODO: incomplete function definition
//  void getAbilityName(AbilitiesIndex); //TODO: incomplete function definition
    void nameToAbilityIndex(std::string const&);
    void onSwitchToCustom();
//  void getCustomAbilityFromCache(AbilitiesIndex); //TODO: incomplete function definition
//  void getCustomAbilityFromCache(AbilitiesIndex)const; //TODO: incomplete function definition
//  void _registerAbility(AbilitiesIndex, Ability const&); //TODO: incomplete function definition
};
