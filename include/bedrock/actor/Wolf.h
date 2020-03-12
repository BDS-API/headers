#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class Wolf : Animal {

public:
    virtual void normalTick();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void addRider(Actor &);
    ~Wolf();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void doHurtTarget(Actor *);
    virtual void getAmbientSound();
    virtual void setSitting(bool);
    virtual void onSynchedDataUpdate(int);
    virtual bool isAlliedTo(Mob *);
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual void onBorn(Actor &, Actor &);
    virtual void newServerAiStep();
    void getBodyRollAngle(float, float);
    Wolf(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isShaking()const;
    void _avoidSnowBury();
    void setWet(bool);
    bool isWet()const;
    bool isInterested()const;
    void getHeadRollAngle(float);
    void _updateTintColor();
    void _isHurt()const;
    void getWetShade(float);
    void getShakeAnim()const;
    void setInterested(bool);
    void getTailAngle();
};
