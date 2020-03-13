#pragma once

#include "Mob.h"


class Squid : Mob {

public:
    ~Squid(); // _ZN5SquidD2Ev
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN5Squid17handleEntityEventE10ActorEventi
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN5Squid35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN5Squid5_hurtERK17ActorDamageSourceibb
    virtual void getAmbientSoundPostponeTicks(); // _ZN5Squid28getAmbientSoundPostponeTicksEv
    virtual void getJumpPower()const; // _ZNK5Squid12getJumpPowerEv
    virtual void aiStep(); // _ZN5Squid6aiStepEv
    virtual void checkSpawnRules(bool); // _ZN5Squid15checkSpawnRulesEb
    virtual void checkSpawnObstruction()const; // _ZNK5Squid21checkSpawnObstructionEv
    void getTy(); // _ZN5Squid5getTyEv
    void setTx(float); // _ZN5Squid5setTxEf
    void setTy(float); // _ZN5Squid5setTyEf
    void setTz(float); // _ZN5Squid5setTzEf
    Squid(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5SquidC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void spawnInkParticles(); // _ZN5Squid17spawnInkParticlesEv
    void _randomInkDir(); // _ZN5Squid13_randomInkDirEv
    void getXBodyRot()const; // _ZNK5Squid11getXBodyRotEv
    void setXBodyRot(float &); // _ZN5Squid11setXBodyRotERf
    void getXBodyRotO()const; // _ZNK5Squid12getXBodyRotOEv
    void setXBodyRotO(float &); // _ZN5Squid12setXBodyRotOERf
    void getZBodyRot()const; // _ZNK5Squid11getZBodyRotEv
    void setZBodyRot(float &); // _ZN5Squid11setZBodyRotERf
    void getZBodyRotO()const; // _ZNK5Squid12getZBodyRotOEv
    void setZBodyRotO(float &); // _ZN5Squid12setZBodyRotOERf
    void getTentacleAngle()const; // _ZNK5Squid16getTentacleAngleEv
    void getOldTentacleAngle()const; // _ZNK5Squid19getOldTentacleAngleEv
};
