#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../block/unmapped/BlockSource.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class HangingActor : Actor {

public:
    static long HANGING_OFFSET;

    virtual void addAdditionalSaveData(CompoundTag &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getBrightness(float)const;
    virtual void normalTick();
    virtual void setSize(float, float);
    virtual void wouldSurvive(BlockSource &);
    virtual void setDir(int);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isPickable();
    virtual void placeHangingEntity(BlockSource &, int);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void move(Vec3 const&);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~HangingActor();
    HangingActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void init();
    void _calculateAABB();
    void _wouldSurvive(BlockSource &, BlockPos const&);
    void _offs(int)const;
    void getDirection()const;
    void dropItem();
    void _calculateActorPositionFromPlacementPosition(BlockPos const&);
    void _calculateBlockPosFromPosition()const;
};
