#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"
#include "Monster.h"


class Silverfish : Monster {

public:
    virtual void spawnAnim();
    virtual void normalTick();
    virtual bool isDarkEnoughToSpawn()const;
    ~Silverfish();
    virtual void aiStep();
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void findAttackTarget();
    virtual void checkSpawnRules(bool);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi()const;
    Silverfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
