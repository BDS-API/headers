#pragma once

class Balloon : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Balloon();
    virtual void remove(void);
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick(void);
    virtual bool isPickable(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    void Balloon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _init(void);
    void remove(bool);
};
