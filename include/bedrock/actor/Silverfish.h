#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"


class Silverfish : Monster {

public:
    virtual Silverfish::~Silverfish()
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
