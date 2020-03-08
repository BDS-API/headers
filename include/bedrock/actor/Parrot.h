#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "../../unmapped/Block"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"


class Parrot : Animal {

public:
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Parrot::~Parrot()
    virtual void getInterpolatedRidingPosition(float)const;
    virtual void getShadowRadius()const;
    virtual void setSitting(bool);
    virtual void rideLanded(Vec3 const&, Vec3 const&);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual bool canBePulledIntoVehicle()const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void _makeFlySound()const;
    virtual void playAmbientSound();
    virtual void getAmbientSound();
    virtual void aiStep();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi()const;

    Parrot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _imitateNearbyMobs();
    void _calculateFlapping();
    void getFlap()const;
    void getOFlap()const;
    void getFlapSpeed()const;
    void getOFlapSpeed()const;
    void _getImitatedSound(ActorType);
};
