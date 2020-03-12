#pragma once

#include "Animal.h"


class Parrot : Animal {

public:
    ~Parrot();
    virtual void getShadowRadius()const;
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getInterpolatedRidingPosition(float)const;
    virtual void useNewAi()const;
    virtual void aiStep();
    virtual void playAmbientSound();
    virtual void _makeFlySound()const;
    virtual void rideLanded(Vec3 const&, Vec3 const&);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual bool canBePulledIntoVehicle()const;
    virtual void getAmbientSound();
    virtual void setSitting(bool);
    void getFlap()const;
    Parrot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getOFlapSpeed()const;
    void getFlapSpeed()const;
    void _calculateFlapping();
    void _imitateNearbyMobs();
//  void _getImitatedSound(ActorType); //TODO: incomplete function definition
    void getOFlap()const;
};
