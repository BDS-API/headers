#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/ActorDefinitionGroup"


class Silverfish : Monster {

public:
    virtual Silverfish::~Silverfish();
    virtual void normalTick(void);
    virtual void findAttackTarget(void);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void spawnAnim(void);
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi(void)const;
    virtual bool isDarkEnoughToSpawn(void)const;

    Silverfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
