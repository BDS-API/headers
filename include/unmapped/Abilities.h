#pragma once

#include <string>
#include <functional>


class Abilities {

public:
    static long ABILITY_NAMES;
    static std::string TAG;

    bool isFlying()const;
//  void getFloat(AbilitiesIndex)const; //TODO: incomplete function definition
    void addSaveData(CompoundTag &)const;
//  void setAbility(AbilitiesIndex, float); //TODO: incomplete function definition
//  void setAbility(AbilitiesIndex, Ability const&); //TODO: incomplete function definition
    void loadSaveData(CompoundTag const&);
//  void getAbility(AbilitiesIndex); //TODO: incomplete function definition
//  void getCustomAbilityFromCache(AbilitiesIndex); //TODO: incomplete function definition
//  void setAbility(AbilitiesIndex, bool); //TODO: incomplete function definition
    Abilities(Abilities const&);
//  void setPlayerPermissions(PlayerPermissionLevel); //TODO: incomplete function definition
    bool isOperator()const;
    void _initAbilities();
//  void getBool(AbilitiesIndex)const; //TODO: incomplete function definition
    void getPlayerPermissions()const;
    void onSwitchToCustom();
//  void getAbilityName(AbilitiesIndex); //TODO: incomplete function definition
    void getCommandPermissions()const;
    void _resetAbilities();
    Abilities();
    void nameToAbilityIndex(std::string const&);
    ~Abilities();
    void _resetCustomAbilities();
//  void _registerAbility(AbilitiesIndex, Ability const&); //TODO: incomplete function definition
    void operator==(Abilities const&)const;
//  void getAbility(AbilitiesIndex)const; //TODO: incomplete function definition
//  void setCommandPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    void operator!=(Abilities const&)const;
//  void getCustomAbilityFromCache(AbilitiesIndex)const; //TODO: incomplete function definition
//  void forEachAbility(std::function<void (Ability &, char const*)> const&, Ability::Options); //TODO: incomplete function definition
//  void setAbilityDiff(AbilitiesIndex, bool, bool &); //TODO: incomplete function definition
    void _registerAbilities();
//  void _setCustomCachedAbility(AbilitiesIndex); //TODO: incomplete function definition
//  void forEachAbility(std::function<void (Ability const&, char const*)> const&, Ability::Options)const; //TODO: incomplete function definition
};
