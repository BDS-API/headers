#pragma once

#include "Monster.h"


class Silverfish : Monster {

public:
    ~Silverfish(); // _ZN10SilverfishD2Ev
    virtual void normalTick(); // _ZN10Silverfish10normalTickEv
    virtual void findAttackTarget(); // _ZN10Silverfish16findAttackTargetEv
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN10Silverfish17handleEntityEventE10ActorEventi
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN10Silverfish14_playStepSoundERK8BlockPosRK5Block
    virtual void spawnAnim(); // _ZN10Silverfish9spawnAnimEv
    virtual void aiStep(); // _ZN10Silverfish6aiStepEv
    virtual void checkSpawnRules(bool); // _ZN10Silverfish15checkSpawnRulesEb
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN10Silverfish19_getWalkTargetValueERK8BlockPos
    virtual void useNewAi()const; // _ZNK10Silverfish8useNewAiEv
    virtual bool isDarkEnoughToSpawn()const; // _ZNK10Silverfish19isDarkEnoughToSpawnEv
    Silverfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN10SilverfishC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
