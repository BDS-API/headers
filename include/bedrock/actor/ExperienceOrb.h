#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/BlockSource"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"


class ExperienceOrb : Actor {

public:
    static long LIFETIME;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ExperienceOrb::~ExperienceOrb();
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void playerTouch(Player &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void doWaterSplashEffect(void);

    ExperienceOrb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getValue(void)const;
    void setValue(int);
    void handleMending(Player &);
    void getIconIndex(void)const;
    void truncateExperienceAmount(int);
    void spawnOrbs(BlockSource &, Vec3 const&, int, int, ExperienceOrb::DropType, Player *);
    void spawnOrbs(BlockSource &, Vec3 const&, int, ExperienceOrb::DropType, Player *);
    void durabilityToXP(int);
    void xpToDurability(int);
};
