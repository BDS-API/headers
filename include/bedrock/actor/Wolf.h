#pragma once

#include "Animal.h"


class Wolf : Animal {

public:
    ~Wolf(); // _ZN4WolfD2Ev
    virtual void normalTick(); // _ZN4Wolf10normalTickEv
    virtual void addRider(Actor &); // _ZN4Wolf8addRiderER5Actor
    virtual void setSitting(bool); // _ZN4Wolf10setSittingEb
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN4Wolf17handleEntityEventE10ActorEventi
    virtual void load(CompoundTag const&, DataLoadHelper &); // _ZN4Wolf4loadERK11CompoundTagR14DataLoadHelper
    virtual void onSynchedDataUpdate(int); // _ZN4Wolf19onSynchedDataUpdateEi
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN4Wolf5_hurtERK17ActorDamageSourceibb
    virtual void getAmbientSound(); // _ZN4Wolf15getAmbientSoundEv
    virtual bool isAlliedTo(Mob *); // _ZN4Wolf10isAlliedToEP3Mob
    virtual void doHurtTarget(Actor *); // _ZN4Wolf12doHurtTargetEP5Actor
    virtual void onBorn(Actor &, Actor &); // _ZN4Wolf6onBornER5ActorS1_
    virtual void newServerAiStep(); // _ZN4Wolf15newServerAiStepEv
    Wolf(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN4WolfC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _updateTintColor(); // _ZN4Wolf16_updateTintColorEv
    bool isInterested()const; // _ZNK4Wolf12isInterestedEv
    void _avoidSnowBury(); // _ZN4Wolf14_avoidSnowBuryEv
    void getHeadRollAngle(float); // _ZN4Wolf16getHeadRollAngleEf
    void getBodyRollAngle(float, float); // _ZN4Wolf16getBodyRollAngleEff
    void getTailAngle(); // _ZN4Wolf12getTailAngleEv
    void getWetShade(float); // _ZN4Wolf11getWetShadeEf
    void getShakeAnim()const; // _ZNK4Wolf12getShakeAnimEv
    bool isWet()const; // _ZNK4Wolf5isWetEv
    bool isShaking()const; // _ZNK4Wolf9isShakingEv
    void setWet(bool); // _ZN4Wolf6setWetEb
    void setInterested(bool); // _ZN4Wolf13setInterestedEb
    void _isHurt()const; // _ZNK4Wolf7_isHurtEv
};
