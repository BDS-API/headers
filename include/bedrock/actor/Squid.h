#pragma once

#include "../../unmapped/RenderParams"
#include "../../unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"


class Squid : Mob {

public:
    virtual Squid::~Squid();
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSoundPostponeTicks(void);
    virtual void getJumpPower(void)const;
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);
    virtual void checkSpawnObstruction(void)const;

    void getTy(void);
    void setTx(float);
    void setTy(float);
    void setTz(float);
    Squid(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void spawnInkParticles(void);
    void _randomInkDir(void);
    void getXBodyRot(void)const;
    void setXBodyRot(float &);
    void getXBodyRotO(void)const;
    void setXBodyRotO(float &);
    void getZBodyRot(void)const;
    void setZBodyRot(float &);
    void getZBodyRotO(void)const;
    void setZBodyRotO(float &);
    void getTentacleAngle(void)const;
    void getOldTentacleAngle(void)const;
};
