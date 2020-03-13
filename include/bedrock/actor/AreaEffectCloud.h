#pragma once

#include "unmapped/ActorUniqueID.h"
#include "../../unmapped/MobEffectInstance.h"
#include "Actor.h"


class AreaEffectCloud : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN15AreaEffectCloud15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~AreaEffectCloud(); // _ZN15AreaEffectCloudD2Ev
    virtual void normalTick(); // _ZN15AreaEffectCloud10normalTickEv
    virtual void getShadowRadius()const; // _ZNK15AreaEffectCloud15getShadowRadiusEv
    virtual void setOwner(ActorUniqueID); // _ZN15AreaEffectCloud8setOwnerE13ActorUniqueID
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN15AreaEffectCloud22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN15AreaEffectCloud21addAdditionalSaveDataER11CompoundTag
    AreaEffectCloud(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN15AreaEffectCloudC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _getSpawnTick()const; // _ZNK15AreaEffectCloud13_getSpawnTickEv
    void _setSpawnTick(long); // _ZN15AreaEffectCloud13_setSpawnTickEl
    void notifyPickup(); // _ZN15AreaEffectCloud12notifyPickupEv
    void setPickupCount(int); // _ZN15AreaEffectCloud14setPickupCountEi
    void getPickupCount()const; // _ZNK15AreaEffectCloud14getPickupCountEv
    void setInitialRadius(float); // _ZN15AreaEffectCloud16setInitialRadiusEf
    void getInitialRadius()const; // _ZNK15AreaEffectCloud16getInitialRadiusEv
    void getEffectiveRadius()const; // _ZNK15AreaEffectCloud18getEffectiveRadiusEv
    void getRadiusChangeOnPickup()const; // _ZNK15AreaEffectCloud23getRadiusChangeOnPickupEv
    void _getTicksAlive()const; // _ZNK15AreaEffectCloud14_getTicksAliveEv
    void getRadiusPerTick()const; // _ZNK15AreaEffectCloud16getRadiusPerTickEv
    void setPotion(short); // _ZN15AreaEffectCloud9setPotionEs
    void getPotion()const; // _ZNK15AreaEffectCloud9getPotionEv
    void addEffect(MobEffectInstance); // _ZN15AreaEffectCloud9addEffectE17MobEffectInstance
    void getParticle()const; // _ZNK15AreaEffectCloud11getParticleEv
//  void setParticle(ParticleType); //TODO: incomplete function definition // _ZN15AreaEffectCloud11setParticleE12ParticleType
    void setDuration(int); // _ZN15AreaEffectCloud11setDurationEi
    void getDuration()const; // _ZNK15AreaEffectCloud11getDurationEv
    void setRadiusOnUse(float); // _ZN15AreaEffectCloud14setRadiusOnUseEf
    void getRadiusOnUse()const; // _ZNK15AreaEffectCloud14getRadiusOnUseEv
    void setRadiusPerTick(float); // _ZN15AreaEffectCloud16setRadiusPerTickEf
    void setRadiusChangeOnPickup(float); // _ZN15AreaEffectCloud23setRadiusChangeOnPickupEf
    void setDurationOnUse(int); // _ZN15AreaEffectCloud16setDurationOnUseEi
    void getDurationOnUse()const; // _ZNK15AreaEffectCloud16getDurationOnUseEv
    void setReapplicationDelay(int); // _ZN15AreaEffectCloud21setReapplicationDelayEi
    void getReapplicationDelay()const; // _ZNK15AreaEffectCloud21getReapplicationDelayEv
    void _spawnParticles(Random &, unsigned int, float); // _ZN15AreaEffectCloud15_spawnParticlesER6Randomjf
    void setParticleColor(Color &); // _ZN15AreaEffectCloud16setParticleColorER5Color
    void setAffectOwner(bool); // _ZN15AreaEffectCloud14setAffectOwnerEb
};
