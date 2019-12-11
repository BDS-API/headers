#pragma once

class AreaEffectCloud : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~AreaEffectCloud();
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void setOwner(ActorUniqueID);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    void AreaEffectCloud(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _getSpawnTick(void)const;
    void _setSpawnTick(long);
    void notifyPickup(void);
    void setPickupCount(int);
    void getPickupCount(void)const;
    void setInitialRadius(float);
    void getInitialRadius(void)const;
    void getEffectiveRadius(void)const;
    void getRadiusChangeOnPickup(void)const;
    void _getTicksAlive(void)const;
    void getRadiusPerTick(void)const;
    void setPotion(short);
    void getPotion(void)const;
    void addEffect(MobEffectInstance);
    void getParticle(void)const;
    void setParticle(ParticleType);
    void setDuration(int);
    void getDuration(void)const;
    void setRadiusOnUse(float);
    void getRadiusOnUse(void)const;
    void setRadiusPerTick(float);
    void setRadiusChangeOnPickup(float);
    void setDurationOnUse(int);
    void getDurationOnUse(void)const;
    void setReapplicationDelay(int);
    void getReapplicationDelay(void)const;
    void _spawnParticles(Random &, unsigned int, float);
    void setParticleColor(Color &);
    void setAffectOwner(bool);
};
