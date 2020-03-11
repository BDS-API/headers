#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"
#include "./Actor.h"
#include "./Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Wolf : Animal {

public:
    virtual ~Wolf();
    virtual void normalTick();
    virtual void addRider(Actor &);
    virtual void setSitting(bool);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual void onSynchedDataUpdate(int);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSound();
    virtual bool isAlliedTo(Mob *);
    virtual void doHurtTarget(Actor *);
    virtual void onBorn(Actor &, Actor &);
    virtual void newServerAiStep();

    Wolf(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _updateTintColor();
    bool isInterested()const;
    void _avoidSnowBury();
    void getHeadRollAngle(float);
    void getBodyRollAngle(float, float);
    void getTailAngle();
    void getWetShade(float);
    void getShakeAnim()const;
    bool isWet()const;
    bool isShaking()const;
    void setWet(bool);
    void setInterested(bool);
    void _isHurt()const;
};
