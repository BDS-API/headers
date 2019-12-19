#pragma once

class Wolf : Animal {

public:
    virtual Wolf::~Wolf();
    virtual void normalTick(void);
    virtual void addRider(Actor &);
    virtual void setSitting(bool);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual void onSynchedDataUpdate(int);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSound(void);
    virtual bool isAlliedTo(Mob *);
    virtual void doHurtTarget(Actor *);
    virtual void onBorn(Actor &, Actor &);
    virtual void newServerAiStep(void);

    Wolf(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _updateTintColor(void);
    bool isInterested(void)const;
    void _avoidSnowBury(void);
    void getHeadRollAngle(float);
    void getBodyRollAngle(float, float);
    void getTailAngle(void);
    void getWetShade(float);
    void getShakeAnim(void)const;
    bool isWet(void)const;
    bool isShaking(void)const;
    void setWet(bool);
    void setInterested(bool);
    void _isHurt(void)const;
};
