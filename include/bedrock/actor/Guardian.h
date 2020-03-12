#pragma once

#include "Monster.h"


class Guardian : Monster {

public:
    static long ATTACK_TIME;
    static long FIRST_DAMAGE_TIME;

    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void aiStep();
    virtual bool isDarkEnoughToSpawn()const;
    virtual bool canSeeInvisible()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getAmbientSoundPostponeTicks();
    virtual void setTarget(Actor *);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~Guardian();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _onSizeUpdated();
    virtual void getMaxHeadXRot();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void checkSpawnRules(bool);
    void getTargetEntity()const;
    void setAttackTime(int);
    void makeStepSound();
    void getMoveEyeVector();
    void getWalkTargetValue(BlockPos const&);
    bool isElderGhost()const;
    bool isElder()const;
    void getTailAnimation(float);
    void getSpikesAnimation(float);
    Guardian(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setElderGhost();
    void getEyeTarget();
    void registerLoopingSounds();
    void getAttackDuration();
    void getAttackAnimationScale(float);
    void setElder(bool);
};
