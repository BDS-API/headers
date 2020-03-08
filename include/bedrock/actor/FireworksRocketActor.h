#pragma once

#include "../util/Random"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../level/Level"
#include "../util/Vec3"
#include "unmapped/ActorUniqueID"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class FireworksRocketActor : Actor {

public:
    virtual FireworksRocketActor::~FireworksRocketActor()
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void onSynchedDataUpdate(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    FireworksRocketActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void init(Level &, Vec3 const&, CompoundTag const&, Vec3 const&, ActorUniqueID, bool);
    void initTagData(Random);
    void checkAchievement()const;
    void dealExplosionDamage();
    bool isAttachedToEntity()const;
    void setDispensed(bool);
};
