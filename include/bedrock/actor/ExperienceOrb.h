#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "../../unmapped/Block"
#include "unmapped/ActorDefinitionIdentifier"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"


class ExperienceOrb : Actor {

public:
    static long LIFETIME;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    ExperienceOrb::~ExperienceOrb()
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void playerTouch(Player &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void doWaterSplashEffect();

    ExperienceOrb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getValue()const;
    void setValue(int);
    void handleMending(Player &);
    void getIconIndex()const;
    void truncateExperienceAmount(int);
    void spawnOrbs(BlockSource &, Vec3 const&, int, int, ExperienceOrb::DropType, Player *);
    void spawnOrbs(BlockSource &, Vec3 const&, int, ExperienceOrb::DropType, Player *);
    void durabilityToXP(int);
    void xpToDurability(int);
};
