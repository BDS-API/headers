#pragma once

#include "Actor.h"
#include "../util/Random.h"
#include "unmapped/ActorUniqueID.h"


class FireworksRocketActor : Actor {

public:
    virtual void getShadowRadius()const;
    virtual void normalTick();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void onSynchedDataUpdate(int);
    ~FireworksRocketActor();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void lerpMotion(Vec3 const&);
    void initTagData(Random);
    void dealExplosionDamage();
    FireworksRocketActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isAttachedToEntity()const;
    void setDispensed(bool);
    void checkAchievement()const;
    void init(Level &, Vec3 const&, CompoundTag const&, Vec3 const&, ActorUniqueID, bool);
};
