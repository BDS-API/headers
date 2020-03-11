#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "./Monster.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Guardian : Monster {

public:
    static long ATTACK_TIME;
    static long FIRST_DAMAGE_TIME;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Guardian();
    virtual bool canSeeInvisible()const;
    virtual void setTarget(Actor *);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void getAmbientSoundPostponeTicks();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void getMaxHeadXRot();
    virtual bool isDarkEnoughToSpawn()const;

    Guardian(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void registerLoopingSounds();
    bool isElder()const;
    void setElder(bool);
    void getAttackDuration();
    void setElderGhost();
    void makeStepSound();
    void getWalkTargetValue(BlockPos const&);
    void getTargetEntity()const;
    void getAttackAnimationScale(float);
    void getTailAnimation(float);
    void getSpikesAnimation(float);
    bool isElderGhost()const;
    void setAttackTime(int);
    void getEyeTarget();
    void getMoveEyeVector();
};
