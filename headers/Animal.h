#pragma once

class Animal : Mob {

public:
    virtual ~Animal();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated(void);
    virtual void getAmbientSoundPostponeTicks(void);
    virtual void _getWalkTargetValue(BlockPos const&);

    void Animal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
