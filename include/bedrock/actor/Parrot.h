#pragma once

#include "Animal.h"


class Parrot : Animal {

public:
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN6Parrot21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~Parrot(); // _ZN6ParrotD2Ev
    virtual void getInterpolatedRidingPosition(float)const; // _ZNK6Parrot29getInterpolatedRidingPositionEf
    virtual void getShadowRadius()const; // _ZNK6Parrot15getShadowRadiusEv
    virtual void setSitting(bool); // _ZN6Parrot10setSittingEb
    virtual void rideLanded(Vec3 const&, Vec3 const&); // _ZN6Parrot10rideLandedERK4Vec3S2_
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK6Parrot16isInvulnerableToERK17ActorDamageSource
    virtual bool canBePulledIntoVehicle()const; // _ZNK6Parrot22canBePulledIntoVehicleEv
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN6Parrot14_playStepSoundERK8BlockPosRK5Block
    virtual void _makeFlySound()const; // _ZNK6Parrot13_makeFlySoundEv
    virtual void playAmbientSound(); // _ZN6Parrot16playAmbientSoundEv
    virtual void getAmbientSound(); // _ZN6Parrot15getAmbientSoundEv
    virtual void aiStep(); // _ZN6Parrot6aiStepEv
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN6Parrot19_getWalkTargetValueERK8BlockPos
    virtual void useNewAi()const; // _ZNK6Parrot8useNewAiEv
    Parrot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6ParrotC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _imitateNearbyMobs(); // _ZN6Parrot18_imitateNearbyMobsEv
    void _calculateFlapping(); // _ZN6Parrot18_calculateFlappingEv
    void getFlap()const; // _ZNK6Parrot7getFlapEv
    void getOFlap()const; // _ZNK6Parrot8getOFlapEv
    void getFlapSpeed()const; // _ZNK6Parrot12getFlapSpeedEv
    void getOFlapSpeed()const; // _ZNK6Parrot13getOFlapSpeedEv
//  void _getImitatedSound(ActorType); //TODO: incomplete function definition // _ZN6Parrot17_getImitatedSoundE9ActorType
};
