#pragma once

#include "../block/unmapped/BlockSource.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "./Player.h"
#include "../../unmapped/Block.h"


class ExperienceOrb : Actor {

public:
    static long LIFETIME;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ExperienceOrb();
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
//  void spawnOrbs(BlockSource &, Vec3 const&, int, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition
//  void spawnOrbs(BlockSource &, Vec3 const&, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition
    void durabilityToXP(int);
    void xpToDurability(int);
};
