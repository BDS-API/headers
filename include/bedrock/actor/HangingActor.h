#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "../block/unmapped/BlockSource"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class HangingActor : Actor {

public:
    static long HANGING_OFFSET;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual HangingActor::~HangingActor()
    virtual void move(Vec3 const&);
    virtual void normalTick();
    virtual void getBrightness(float)const;
    virtual bool isPickable();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void setSize(float, float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void setDir(int);
    virtual void placeHangingEntity(BlockSource &, int);
    virtual void wouldSurvive(BlockSource &);

    HangingActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void init();
    void _offs(int)const;
    void _calculateBlockPosFromPosition()const;
    void _calculateActorPositionFromPlacementPosition(BlockPos const&);
    void _calculateAABB();
    void _wouldSurvive(BlockSource &, BlockPos const&);
    void dropItem();
    void getDirection()const;
};
