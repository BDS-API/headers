#pragma once

#include "../level/Level"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/Random"
#include "../nbt/CompoundTag"
#include "../../unmapped/Vec3"


class FireworksRocketActor : Actor {

public:
    virtual FireworksRocketActor::~FireworksRocketActor();
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void onSynchedDataUpdate(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    FireworksRocketActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void init(Level &, Vec3 const&, CompoundTag const&, Vec3 const&, ActorUniqueID, bool);
    void initTagData(Random);
    void checkAchievement(void)const;
    void dealExplosionDamage(void);
    bool isAttachedToEntity(void)const;
    void setDispensed(bool);
};
