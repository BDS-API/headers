#pragma once

#include "Mob.h"


class Squid : Mob {

public:
    virtual void checkSpawnRules(bool);
    virtual void checkSpawnObstruction()const;
    virtual void aiStep();
    virtual void getAmbientSoundPostponeTicks();
    ~Squid();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getJumpPower()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    Squid(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _randomInkDir();
    void setZBodyRot(float &);
    void getZBodyRotO()const;
    void getOldTentacleAngle()const;
    void setXBodyRot(float &);
    void getZBodyRot()const;
    void setTy(float);
    void spawnInkParticles();
    void setXBodyRotO(float &);
    void getXBodyRot()const;
    void getXBodyRotO()const;
    void setZBodyRotO(float &);
    void getTentacleAngle()const;
    void setTx(float);
    void setTz(float);
    void getTy();
};
