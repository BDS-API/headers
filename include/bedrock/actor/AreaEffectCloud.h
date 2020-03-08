#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorUniqueID"
#include "../../unmapped/MobEffectInstance"
#include "../util/Color"
#include "../util/Random"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class AreaEffectCloud : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    AreaEffectCloud::~AreaEffectCloud()
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void setOwner(ActorUniqueID);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    AreaEffectCloud(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _getSpawnTick()const;
    void _setSpawnTick(long);
    void notifyPickup();
    void setPickupCount(int);
    void getPickupCount()const;
    void setInitialRadius(float);
    void getInitialRadius()const;
    void getEffectiveRadius()const;
    void getRadiusChangeOnPickup()const;
    void _getTicksAlive()const;
    void getRadiusPerTick()const;
    void setPotion(short);
    void getPotion()const;
    void addEffect(MobEffectInstance);
    void getParticle()const;
    void setParticle(ParticleType);
    void setDuration(int);
    void getDuration()const;
    void setRadiusOnUse(float);
    void getRadiusOnUse()const;
    void setRadiusPerTick(float);
    void setRadiusChangeOnPickup(float);
    void setDurationOnUse(int);
    void getDurationOnUse()const;
    void setReapplicationDelay(int);
    void getReapplicationDelay()const;
    void _spawnParticles(Random &, unsigned int, float);
    void setParticleColor(Color &);
    void setAffectOwner(bool);
};
