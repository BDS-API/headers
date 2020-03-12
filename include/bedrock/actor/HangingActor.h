#pragma once

#include "Actor.h"


class HangingActor : Actor {

public:
    static long HANGING_OFFSET;

    ~HangingActor();
    virtual void setDir(int);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void wouldSurvive(BlockSource &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void move(Vec3 const&);
    virtual void placeHangingEntity(BlockSource &, int);
    virtual void normalTick();
    virtual void getBrightness(float)const;
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void setSize(float, float);
    void _wouldSurvive(BlockSource &, BlockPos const&);
    void _calculateAABB();
    void getDirection()const;
    void dropItem();
    void init();
    HangingActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _offs(int)const;
    void _calculateActorPositionFromPlacementPosition(BlockPos const&);
    void _calculateBlockPosFromPosition()const;
};
