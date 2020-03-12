#pragma once

#include <string>
#include "../mce/UUID.h"


class DwellerComponent {

public:
    static std::string DWELLING_TYPES;
    static std::string DWELLING_ROLES;

    void checkandUpdateDwellingStatus(Actor const&, Village *);
    ~DwellerComponent();
    DwellerComponent();
    void getVillage(Actor const&)const;
    void _getType(std::string const&)const;
    void _getRole(std::string const&)const;
    void getVillageCenter(Actor const&)const;
    void setDwellingUniqueID(Actor &, mce::UUID);
    void initFromDefinition(Actor &);
    void trySetPreferredProfession(Actor const&, HashedString const&);
    void onDeath(Actor &, ActorDamageSource const&);
    void getDwellerRole()const;
    void addAdditionalSaveData(CompoundTag &);
    void setLastHurtByMob(Actor &, Mob *);
    void getCanFindPOI()const;
    void tryToMigrate(Actor &, Village *, Village *);
    void getDwellingUniqueID()const;
    void getPreferredProfession()const;
    void setFixUpRole(bool);
    DwellerComponent(DwellerComponent &&);
    bool hasPreferredProfession(Actor const&)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    bool wantsToMigrate(Actor const&, Village *)const;
    bool hasDwelling()const;
    bool needsToFixupVillageRole(Actor const&, Village *)const;
    void setDwellingUpdateInterval(unsigned long);
    void getFixUpRole()const;
    void tryToFixupRole(Actor const&, Village *);
    void _isLockedInToProfession(Actor const&)const;
    void getUpdateIntervalBase()const;
    void getUpdateIntervalVariant()const;
    void _clearDwelling();
    void onRemove(Actor &);
    void buildDebugInfo(Actor const&, std::string &)const;
    void clearPreferredProfession();
    void getDwellingUpdateInterval()const;
    bool isWithinRestriction(Actor const&)const;
    void DecrementDwellingUpdateInterval();
};
