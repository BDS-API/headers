#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/Block"


class Silverfish : Monster {

public:
    Silverfish::~Silverfish()
    virtual void normalTick();
    virtual void findAttackTarget();
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void spawnAnim();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi()const;
    virtual bool isDarkEnoughToSpawn()const;

    Silverfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
