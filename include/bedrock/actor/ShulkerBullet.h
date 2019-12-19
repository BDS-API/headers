#pragma once

class ShulkerBullet : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ShulkerBullet::~ShulkerBullet();
    virtual void normalTick(void);
    virtual bool isPickable(void);
    virtual bool isOnFire(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
