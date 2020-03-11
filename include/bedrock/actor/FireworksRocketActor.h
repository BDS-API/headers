#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "unmapped/ActorUniqueID.h"
#include "../level/Level.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/Random.h"
#include "../nbt/CompoundTag.h"


class FireworksRocketActor : Actor {

public:
    virtual ~FireworksRocketActor();
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowRadius()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
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
