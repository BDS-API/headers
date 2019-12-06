#pragma once

class AreaAttackSystem : ITickingSystem {

public:
    virtual ~AreaAttackSystem();
    virtual void tick(EntityRegistry &);

    void AreaAttackSystem(void);
    void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &);
};
