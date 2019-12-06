#pragma once

class LightningBolt : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~LightningBolt();
    virtual void normalTick(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shouldAlwaysRender(void);

    void setCanHurt(bool);
    void LightningBolt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _shouldSetOnFire(void)const;
};
