#pragma once

#include "Monster.h"


class Guardian : Monster {

public:
    static long ATTACK_TIME;
    static long FIRST_DAMAGE_TIME;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN8Guardian15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN8Guardian21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~Guardian(); // _ZN8GuardianD2Ev
    virtual bool canSeeInvisible()const; // _ZNK8Guardian15canSeeInvisibleEv
    virtual void setTarget(Actor *); // _ZN8Guardian9setTargetEP5Actor
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN8Guardian5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN8Guardian22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN8Guardian21addAdditionalSaveDataER11CompoundTag
    virtual void _onSizeUpdated(); // _ZN8Guardian14_onSizeUpdatedEv
    virtual void getAmbientSoundPostponeTicks(); // _ZN8Guardian28getAmbientSoundPostponeTicksEv
    virtual void aiStep(); // _ZN8Guardian6aiStepEv
    virtual void checkSpawnRules(bool); // _ZN8Guardian15checkSpawnRulesEb
    virtual void getMaxHeadXRot(); // _ZN8Guardian14getMaxHeadXRotEv
    virtual bool isDarkEnoughToSpawn()const; // _ZNK8Guardian19isDarkEnoughToSpawnEv
    Guardian(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8GuardianC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void registerLoopingSounds(); // _ZN8Guardian21registerLoopingSoundsEv
    bool isElder()const; // _ZNK8Guardian7isElderEv
    void setElder(bool); // _ZN8Guardian8setElderEb
    void getAttackDuration(); // _ZN8Guardian17getAttackDurationEv
    void setElderGhost(); // _ZN8Guardian13setElderGhostEv
    void makeStepSound(); // _ZN8Guardian13makeStepSoundEv
    void getWalkTargetValue(BlockPos const&); // _ZN8Guardian18getWalkTargetValueERK8BlockPos
    void getTargetEntity()const; // _ZNK8Guardian15getTargetEntityEv
    void getAttackAnimationScale(float); // _ZN8Guardian23getAttackAnimationScaleEf
    void getTailAnimation(float); // _ZN8Guardian16getTailAnimationEf
    void getSpikesAnimation(float); // _ZN8Guardian18getSpikesAnimationEf
    bool isElderGhost()const; // _ZNK8Guardian12isElderGhostEv
    void setAttackTime(int); // _ZN8Guardian13setAttackTimeEi
    void getEyeTarget(); // _ZN8Guardian12getEyeTargetEv
    void getMoveEyeVector(); // _ZN8Guardian16getMoveEyeVectorEv
};
