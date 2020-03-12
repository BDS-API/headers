#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"


class Squid : Mob {

public:
    virtual void aiStep();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void checkSpawnObstruction()const;
    virtual void checkSpawnRules(bool);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getAmbientSoundPostponeTicks();
    ~Squid();
    virtual void getJumpPower()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    void setXBodyRot(float &);
    void getTy();
    void setXBodyRotO(float &);
    void _randomInkDir();
    void setZBodyRot(float &);
    void getZBodyRot()const;
    void getZBodyRotO()const;
    void setZBodyRotO(float &);
    Squid(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void spawnInkParticles();
    void getXBodyRot()const;
    void getTentacleAngle()const;
    void setTx(float);
    void setTy(float);
    void getXBodyRotO()const;
    void getOldTentacleAngle()const;
    void setTz(float);
};
