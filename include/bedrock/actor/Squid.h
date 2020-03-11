#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"


class Squid : Mob {

public:
    virtual ~Squid();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSoundPostponeTicks();
    virtual void getJumpPower()const;
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void checkSpawnObstruction()const;

    void getTy();
    void setTx(float);
    void setTy(float);
    void setTz(float);
    Squid(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void spawnInkParticles();
    void _randomInkDir();
    void getXBodyRot()const;
    void setXBodyRot(float &);
    void getXBodyRotO()const;
    void setXBodyRotO(float &);
    void getZBodyRot()const;
    void setZBodyRot(float &);
    void getZBodyRotO()const;
    void setZBodyRotO(float &);
    void getTentacleAngle()const;
    void getOldTentacleAngle()const;
};
