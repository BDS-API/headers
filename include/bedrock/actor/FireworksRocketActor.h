#pragma once

#include "Actor.h"
#include "../util/Random.h"
#include "unmapped/ActorUniqueID.h"


class FireworksRocketActor : public Actor {

public:
    virtual ~FireworksRocketActor(); // _ZN20FireworksRocketActorD2Ev
    virtual void __fake_function0(); // fake
    virtual void lerpMotion(Vec3 const&); // _ZN20FireworksRocketActor10lerpMotionERK4Vec3
    virtual void normalTick(); // _ZN20FireworksRocketActor10normalTickEv
    virtual void getShadowRadius()const; // _ZNK20FireworksRocketActor15getShadowRadiusEv
    virtual void handleEntityEvent__incomplete0(long, int); //TODO: incomplete function definition // _ZN20FireworksRocketActor17handleEntityEventE10ActorEventi
    virtual void onSynchedDataUpdate(int); // _ZN20FireworksRocketActor19onSynchedDataUpdateEi
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN20FireworksRocketActor22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN20FireworksRocketActor21addAdditionalSaveDataER11CompoundTag
    FireworksRocketActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN20FireworksRocketActorC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void init(Level &, Vec3 const&, CompoundTag const&, Vec3 const&, ActorUniqueID, bool); // _ZN20FireworksRocketActor4initER5LevelRK4Vec3RK11CompoundTagS4_13ActorUniqueIDb
    void initTagData(Random); // _ZN20FireworksRocketActor11initTagDataE6Random
    void checkAchievement()const; // _ZNK20FireworksRocketActor16checkAchievementEv
    void dealExplosionDamage(); // _ZN20FireworksRocketActor19dealExplosionDamageEv
    bool isAttachedToEntity()const; // _ZNK20FireworksRocketActor18isAttachedToEntityEv
    void setDispensed(bool); // _ZN20FireworksRocketActor12setDispensedEb
};
