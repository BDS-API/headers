#pragma once

class Arrow : AbstractArrow {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Arrow::~Arrow();
    virtual void normalTick(void);
    virtual void playerTouch(Player &);
    virtual void setAuxValue(int);
    virtual bool canMakeStepSound(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _getPickupItem(void)const;
    virtual void applyParticleColor(Particle *);
    virtual void getEffectColor(void);

    Arrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData(void);
    void setEnchantPower(int);
    void getEnchantPower(void)const;
    void setEnchantPunch(int);
    void getEnchantPunch(void)const;
    void setEnchantFlame(int);
    void getEnchantFlame(void)const;
    void getAuxValue(void)const;
    void getEnchantInfinity(void)const;
    void setEnchantInfinity(int);
    void addMobEffect(MobEffectInstance);
    void setCritical(bool);
    bool isCritical(void)const;
    void _readItemEnchants(ItemStack const&);
    void getEffects(void)const;
    void getEffectCount(void)const;
};
