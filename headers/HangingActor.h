#pragma once

class HangingActor : Actor {

public:
    static long HANGING_OFFSET;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~HangingActor();
    virtual void move(Vec3 const&);
    virtual void normalTick(void);
    virtual void getBrightness(float)const;
    virtual bool isPickable(void);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void setSize(float, float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void setDir(int);
    virtual void placeHangingEntity(BlockSource &, int);
    virtual void wouldSurvive(BlockSource &);

    void HangingActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void init(void);
    void _offs(int)const;
    void _calculateBlockPosFromPosition(void)const;
    void _calculateActorPositionFromPlacementPosition(BlockPos const&);
    void _calculateAABB(void);
    void _wouldSurvive(BlockSource &, BlockPos const&);
    void dropItem(void);
    void getDirection(void)const;
};
