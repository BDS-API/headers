#pragma once

class Parrot : Animal {

public:
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Parrot::~Parrot();
    virtual void getInterpolatedRidingPosition(float)const;
    virtual void getShadowRadius(void)const;
    virtual void setSitting(bool);
    virtual void rideLanded(Vec3 const&, Vec3 const&);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual bool canBePulledIntoVehicle(void)const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void _makeFlySound(void)const;
    virtual void playAmbientSound(void);
    virtual void getAmbientSound(void);
    virtual void aiStep(void);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi(void)const;

    Parrot(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _imitateNearbyMobs(void);
    void _calculateFlapping(void);
    void getFlap(void)const;
    void getOFlap(void)const;
    void getFlapSpeed(void)const;
    void getOFlapSpeed(void)const;
    void _getImitatedSound(ActorType);
};
