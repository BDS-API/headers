#pragma once

#include "Monster.h"


class Silverfish : Monster {

public:
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void spawnAnim();
    virtual bool isDarkEnoughToSpawn()const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void findAttackTarget();
    virtual void normalTick();
    ~Silverfish();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void useNewAi()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    Silverfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
