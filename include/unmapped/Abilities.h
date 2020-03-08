#pragma once

#include "../bedrock/nbt/CompoundTag"


class Abilities {

public:
    static long ABILITY_NAMES;
    static long TAG[abi:cxx11];


    Abilities(void);
    void _initAbilities();
    void _registerAbilities();
    void setPlayerPermissions(PlayerPermissionLevel);
    Abilities(Abilities const&);
    void addSaveData(CompoundTag &)const;
    void forEachAbility(std::function<void ()(Ability const&, char const*)> const&, Ability::Options)const;
    void loadSaveData(CompoundTag const&);
    void forEachAbility(std::function<void ()(Ability &, char const*)> const&, Ability::Options);
    void setAbility(AbilitiesIndex, bool);
    bool isFlying()const;
    void getBool(AbilitiesIndex)const;
    void getCommandPermissions()const;
    void setCommandPermissions(CommandPermissionLevel);
    bool isOperator()const;
    void getPlayerPermissions()const;
    void _setCustomCachedAbility(AbilitiesIndex);
    void _resetCustomAbilities();
    void _resetAbilities();
    void getAbility(AbilitiesIndex);
    void setAbilityDiff(AbilitiesIndex, bool, bool &);
    void setAbility(AbilitiesIndex, float);
    void setAbility(AbilitiesIndex, Ability const&);
    void getAbility(AbilitiesIndex)const;
    void getFloat(AbilitiesIndex)const;
    void getAbilityName(AbilitiesIndex);
    void nameToAbilityIndex(std::string const&);
    void onSwitchToCustom();
    void getCustomAbilityFromCache(AbilitiesIndex);
    void getCustomAbilityFromCache(AbilitiesIndex)const;
    void _registerAbility(AbilitiesIndex, Ability const&);
};
