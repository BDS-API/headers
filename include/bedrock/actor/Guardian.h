#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Guardian : Monster {

public:
    static long ATTACK_TIME;
    static long FIRST_DAMAGE_TIME;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Guardian::~Guardian()
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
