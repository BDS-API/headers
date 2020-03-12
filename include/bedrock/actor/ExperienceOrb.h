#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "../block/unmapped/BlockSource.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class ExperienceOrb : Actor {

public:
    static long LIFETIME;

    virtual void playerTouch(Player &);
    ~ExperienceOrb();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void doWaterSplashEffect();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void _playStepSound(BlockPos const&, Block const&);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getShadowRadius()const;
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void normalTick();
    void durabilityToXP(int);
    void handleMending(Player &);
//  void spawnOrbs(BlockSource &, Vec3 const&, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition
    void truncateExperienceAmount(int);
//  void spawnOrbs(BlockSource &, Vec3 const&, int, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition
    void setValue(int);
    ExperienceOrb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getValue()const;
    void getIconIndex()const;
    void xpToDurability(int);
};
