#pragma once

class ShulkerBullet : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~ShulkerBullet();
    virtual void normalTick(void);
    virtual bool isPickable(void);
    virtual bool isOnFire(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    void ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
