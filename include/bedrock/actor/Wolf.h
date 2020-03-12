#pragma once

#include "Animal.h"


class Wolf : Animal {

public:
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual void onBorn(Actor &, Actor &);
    virtual void normalTick();
    ~Wolf();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void onSynchedDataUpdate(int);
    virtual void doHurtTarget(Actor *);
    virtual bool isAlliedTo(Mob *);
    virtual void addRider(Actor &);
    virtual void getAmbientSound();
    virtual void newServerAiStep();
    virtual void setSitting(bool);
    void setInterested(bool);
    void getTailAngle();
    void getWetShade(float);
    void getBodyRollAngle(float, float);
    bool isInterested()const;
    void getHeadRollAngle(float);
    void _updateTintColor();
    void _avoidSnowBury();
    bool isWet()const;
    bool isShaking()const;
    void setWet(bool);
    Wolf(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getShakeAnim()const;
    void _isHurt()const;
};
