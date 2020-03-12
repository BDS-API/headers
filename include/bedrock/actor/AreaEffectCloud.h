#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorUniqueID.h"
#include "../util/Color.h"
#include "../util/Random.h"
#include "../../unmapped/DataLoadHelper.h"


class AreaEffectCloud : Actor {

public:
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void setOwner(ActorUniqueID);
    ~AreaEffectCloud();
    void setReapplicationDelay(int);
    void getParticle()const;
    void getRadiusOnUse()const;
    void getInitialRadius()const;
    void _spawnParticles(Random &, unsigned int, float);
    void setDuration(int);
    void notifyPickup();
    void getPotion()const;
    void setPotion(short);
    void setAffectOwner(bool);
    void getReapplicationDelay()const;
    void setPickupCount(int);
    void getRadiusChangeOnPickup()const;
    void getDurationOnUse()const;
    void setDurationOnUse(int);
    void getEffectiveRadius()const;
    void _getSpawnTick()const;
    void setInitialRadius(float);
    void _getTicksAlive()const;
    void setRadiusOnUse(float);
//  void setParticle(ParticleType); //TODO: incomplete function definition
    void setRadiusPerTick(float);
    void getRadiusPerTick()const;
    void _setSpawnTick(long);
    void setParticleColor(Color &);
    void addEffect(MobEffectInstance);
    void setRadiusChangeOnPickup(float);
    void getPickupCount()const;
    void getDuration()const;
    AreaEffectCloud(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
