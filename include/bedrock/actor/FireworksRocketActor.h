#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorUniqueID.h"
#include "../level/Level.h"
#include "../util/Random.h"
#include "../../unmapped/DataLoadHelper.h"


class FireworksRocketActor : Actor {

public:
    virtual void onSynchedDataUpdate(int);
    virtual void lerpMotion(Vec3 const&);
    ~FireworksRocketActor();
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getShadowRadius()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    void init(Level &, Vec3 const&, CompoundTag const&, Vec3 const&, ActorUniqueID, bool);
    void checkAchievement()const;
    void dealExplosionDamage();
    bool isAttachedToEntity()const;
    void setDispensed(bool);
    FireworksRocketActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void initTagData(Random);
};
