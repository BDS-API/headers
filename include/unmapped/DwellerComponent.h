#pragma once

#include "../bedrock/actor/Actor.h"
#include <string>
#include "../bedrock/actor/Mob.h"
#include "Village.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "HashedString.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "DataLoadHelper.h"
#include "../mce/UUID.h"


class DwellerComponent {

public:
    static std::string DWELLING_TYPES;
    static std::string DWELLING_ROLES;

    void _isLockedInToProfession(Actor const&)const;
    void setDwellingUniqueID(Actor &, mce::UUID);
    ~DwellerComponent();
    void tryToMigrate(Actor &, Village *, Village *);
    void clearPreferredProfession();
    bool needsToFixupVillageRole(Actor const&, Village *)const;
    void onRemove(Actor &);
    void getUpdateIntervalBase()const;
    void checkandUpdateDwellingStatus(Actor const&, Village *);
    bool wantsToMigrate(Actor const&, Village *)const;
    void getDwellingUniqueID()const;
    void getFixUpRole()const;
    void trySetPreferredProfession(Actor const&, HashedString const&);
    DwellerComponent();
    void setLastHurtByMob(Actor &, Mob *);
    void DecrementDwellingUpdateInterval();
    void getUpdateIntervalVariant()const;
    void getPreferredProfession()const;
    bool hasDwelling()const;
    void _getRole(std::string const&)const;
    DwellerComponent(DwellerComponent &&);
    void onDeath(Actor &, ActorDamageSource const&);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    bool hasPreferredProfession(Actor const&)const;
    void getVillage(Actor const&)const;
    bool isWithinRestriction(Actor const&)const;
    void setFixUpRole(bool);
    void setDwellingUpdateInterval(unsigned long);
    void tryToFixupRole(Actor const&, Village *);
    void getDwellerRole()const;
    void _clearDwelling();
    void getDwellingUpdateInterval()const;
    void getVillageCenter(Actor const&)const;
    void _getType(std::string const&)const;
    void getCanFindPOI()const;
    void buildDebugInfo(Actor const&, std::string &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
