#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/BlockPos.h"
#include "./Monster.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/Block.h"


class Silverfish : Monster {

public:
    virtual ~Silverfish();
    virtual void normalTick();
    virtual void findAttackTarget();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void spawnAnim();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi()const;
    virtual bool isDarkEnoughToSpawn()const;

    Silverfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
