#pragma once

#include "Actor.h"
#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorUniqueID.h"


class AreaEffectCloud : Actor {

public:
    ~AreaEffectCloud();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getShadowRadius()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void normalTick();
    virtual void setOwner(ActorUniqueID);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    void getDuration()const;
    void setAffectOwner(bool);
    void setReapplicationDelay(int);
    void setDuration(int);
    void setPickupCount(int);
    void getPotion()const;
    void getRadiusOnUse()const;
    void _getSpawnTick()const;
    void getDurationOnUse()const;
    void getParticle()const;
    void setDurationOnUse(int);
    void getInitialRadius()const;
    void _setSpawnTick(long);
    void getPickupCount()const;
    void setParticleColor(Color &);
    void setRadiusPerTick(float);
    void getRadiusChangeOnPickup()const;
    void getRadiusPerTick()const;
//  void setParticle(ParticleType); //TODO: incomplete function definition
    AreaEffectCloud(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setInitialRadius(float);
    void setRadiusChangeOnPickup(float);
    void _spawnParticles(Random &, unsigned int, float);
    void getReapplicationDelay()const;
    void addEffect(MobEffectInstance);
    void setRadiusOnUse(float);
    void notifyPickup();
    void setPotion(short);
    void getEffectiveRadius()const;
    void _getTicksAlive()const;
};
