#pragma once

class EyeOfEnder : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~EyeOfEnder();
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;

    void EyeOfEnder(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void signalTo(Player const&, BlockPos &);
};
