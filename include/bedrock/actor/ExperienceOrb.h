#pragma once

#include "Actor.h"


class ExperienceOrb : Actor {

public:
    static long LIFETIME;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN13ExperienceOrb15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~ExperienceOrb(); // _ZN13ExperienceOrbD2Ev
    virtual void normalTick(); // _ZN13ExperienceOrb10normalTickEv
    virtual void getShadowRadius()const; // _ZNK13ExperienceOrb15getShadowRadiusEv
    virtual void playerTouch(Player &); // _ZN13ExperienceOrb11playerTouchER6Player
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK13ExperienceOrb16isInvulnerableToERK17ActorDamageSource
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN13ExperienceOrb5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN13ExperienceOrb22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN13ExperienceOrb21addAdditionalSaveDataER11CompoundTag
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN13ExperienceOrb14_playStepSoundERK8BlockPosRK5Block
    virtual void doWaterSplashEffect(); // _ZN13ExperienceOrb19doWaterSplashEffectEv
    ExperienceOrb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13ExperienceOrbC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getValue()const; // _ZNK13ExperienceOrb8getValueEv
    void setValue(int); // _ZN13ExperienceOrb8setValueEi
    void handleMending(Player &); // _ZN13ExperienceOrb13handleMendingER6Player
    void getIconIndex()const; // _ZNK13ExperienceOrb12getIconIndexEv
    void truncateExperienceAmount(int); // _ZN13ExperienceOrb24truncateExperienceAmountEi
//  void spawnOrbs(BlockSource &, Vec3 const&, int, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition // _ZN13ExperienceOrb9spawnOrbsER11BlockSourceRK4Vec3iiNS_8DropTypeEP6Player
//  void spawnOrbs(BlockSource &, Vec3 const&, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition // _ZN13ExperienceOrb9spawnOrbsER11BlockSourceRK4Vec3iNS_8DropTypeEP6Player
    void durabilityToXP(int); // _ZN13ExperienceOrb14durabilityToXPEi
    void xpToDurability(int); // _ZN13ExperienceOrb14xpToDurabilityEi
};
