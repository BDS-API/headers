#pragma once

#include "../mce/UUID.h"
#include <string>


class DwellerComponent {

public:
    static std::string DWELLING_TYPES;
    static std::string DWELLING_ROLES;

    ~DwellerComponent(); // _ZN16DwellerComponentD2Ev
    DwellerComponent(DwellerComponent &&); // _ZN16DwellerComponentC2EOS_
    DwellerComponent(); // _ZN16DwellerComponentC2Ev
    void initFromDefinition(Actor &); // _ZN16DwellerComponent18initFromDefinitionER5Actor
    void _getType(std::string const&)const; // _ZNK16DwellerComponent8_getTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getRole(std::string const&)const; // _ZNK16DwellerComponent8_getRoleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onDeath(Actor &, ActorDamageSource const&); // _ZN16DwellerComponent7onDeathER5ActorRK17ActorDamageSource
    void getVillage(Actor const&)const; // _ZNK16DwellerComponent10getVillageERK5Actor
    void onRemove(Actor &); // _ZN16DwellerComponent8onRemoveER5Actor
    void setLastHurtByMob(Actor &, Mob *); // _ZN16DwellerComponent16setLastHurtByMobER5ActorP3Mob
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN16DwellerComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void addAdditionalSaveData(CompoundTag &); // _ZN16DwellerComponent21addAdditionalSaveDataER11CompoundTag
    void getDwellerRole()const; // _ZNK16DwellerComponent14getDwellerRoleEv
    void getCanFindPOI()const; // _ZNK16DwellerComponent13getCanFindPOIEv
    void buildDebugInfo(Actor const&, std::string &)const; // _ZNK16DwellerComponent14buildDebugInfoERK5ActorRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasDwelling()const; // _ZNK16DwellerComponent11hasDwellingEv
    void getDwellingUniqueID()const; // _ZNK16DwellerComponent19getDwellingUniqueIDEv
    void setDwellingUniqueID(Actor &, mce::UUID); // _ZN16DwellerComponent19setDwellingUniqueIDER5ActorN3mce4UUIDE
    void _clearDwelling(); // _ZN16DwellerComponent14_clearDwellingEv
    void getDwellingUpdateInterval()const; // _ZNK16DwellerComponent25getDwellingUpdateIntervalEv
    void setDwellingUpdateInterval(unsigned long); // _ZN16DwellerComponent25setDwellingUpdateIntervalEm
    void DecrementDwellingUpdateInterval(); // _ZN16DwellerComponent31DecrementDwellingUpdateIntervalEv
    void getFixUpRole()const; // _ZNK16DwellerComponent12getFixUpRoleEv
    void setFixUpRole(bool); // _ZN16DwellerComponent12setFixUpRoleEb
    void getUpdateIntervalBase()const; // _ZNK16DwellerComponent21getUpdateIntervalBaseEv
    void getUpdateIntervalVariant()const; // _ZNK16DwellerComponent24getUpdateIntervalVariantEv
    void getVillageCenter(Actor const&)const; // _ZNK16DwellerComponent16getVillageCenterERK5Actor
    bool hasPreferredProfession(Actor const&)const; // _ZNK16DwellerComponent22hasPreferredProfessionERK5Actor
    void _isLockedInToProfession(Actor const&)const; // _ZNK16DwellerComponent23_isLockedInToProfessionERK5Actor
    void getPreferredProfession()const; // _ZNK16DwellerComponent22getPreferredProfessionEv
    void trySetPreferredProfession(Actor const&, HashedString const&); // _ZN16DwellerComponent25trySetPreferredProfessionERK5ActorRK12HashedString
    void clearPreferredProfession(); // _ZN16DwellerComponent24clearPreferredProfessionEv
    bool isWithinRestriction(Actor const&)const; // _ZNK16DwellerComponent19isWithinRestrictionERK5Actor
    void tryToMigrate(Actor &, Village *, Village *); // _ZN16DwellerComponent12tryToMigrateER5ActorP7VillageS3_
    bool wantsToMigrate(Actor const&, Village *)const; // _ZNK16DwellerComponent14wantsToMigrateERK5ActorP7Village
    void tryToFixupRole(Actor const&, Village *); // _ZN16DwellerComponent14tryToFixupRoleERK5ActorP7Village
    bool needsToFixupVillageRole(Actor const&, Village *)const; // _ZNK16DwellerComponent23needsToFixupVillageRoleERK5ActorP7Village
    void checkandUpdateDwellingStatus(Actor const&, Village *); // _ZN16DwellerComponent28checkandUpdateDwellingStatusERK5ActorP7Village
};
