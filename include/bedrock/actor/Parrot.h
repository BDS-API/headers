#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Animal.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"
#include "damagesource/ActorDamageSource.h"


class Parrot : Animal {

public:
    virtual void setSitting(bool);
    virtual void useNewAi()const;
    ~Parrot();
    virtual void rideLanded(Vec3 const&, Vec3 const&);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual bool canBePulledIntoVehicle()const;
    virtual void _makeFlySound()const;
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getAmbientSound();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void playAmbientSound();
    virtual void getInterpolatedRidingPosition(float)const;
    virtual void aiStep();
    virtual void getShadowRadius()const;
    void getOFlap()const;
    void getFlap()const;
//  void _getImitatedSound(ActorType); //TODO: incomplete function definition
    Parrot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _calculateFlapping();
    void _imitateNearbyMobs();
    void getFlapSpeed()const;
    void getOFlapSpeed()const;
};
