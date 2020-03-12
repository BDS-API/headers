#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"
#include "Monster.h"


class Guardian : Monster {

public:
    static long ATTACK_TIME;
    static long FIRST_DAMAGE_TIME;

//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool canSeeInvisible()const;
    virtual void aiStep();
    ~Guardian();
    virtual void setTarget(Actor *);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getAmbientSoundPostponeTicks();
    virtual void getMaxHeadXRot();
    virtual void _onSizeUpdated();
    virtual bool isDarkEnoughToSpawn()const;
    virtual void checkSpawnRules(bool);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    void getTailAnimation(float);
    void getWalkTargetValue(BlockPos const&);
    void getAttackAnimationScale(float);
    bool isElder()const;
    void setElder(bool);
    bool isElderGhost()const;
    void getTargetEntity()const;
    void makeStepSound();
    void setElderGhost();
    void setAttackTime(int);
    void getMoveEyeVector();
    void registerLoopingSounds();
    void getSpikesAnimation(float);
    void getEyeTarget();
    void getAttackDuration();
    Guardian(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
