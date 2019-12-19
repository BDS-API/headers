#pragma once

class Guardian : Monster {

public:
    static long ATTACK_TIME;
    static long FIRST_DAMAGE_TIME;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Guardian();
    virtual bool canSeeInvisible(void)const;
    virtual void setTarget(Actor *);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void getAmbientSoundPostponeTicks(void);
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);
    virtual void getMaxHeadXRot(void);
    virtual bool isDarkEnoughToSpawn(void)const;

    void Guardian(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void registerLoopingSounds(void);
    bool isElder(void)const;
    void setElder(bool);
    void getAttackDuration(void);
    void setElderGhost(void);
    void makeStepSound(void);
    void getWalkTargetValue(BlockPos const&);
    void getTargetEntity(void)const;
    void getAttackAnimationScale(float);
    void getTailAnimation(float);
    void getSpikesAnimation(float);
    bool isElderGhost(void)const;
    void setAttackTime(int);
    void getEyeTarget(void);
    void getMoveEyeVector(void);
};
