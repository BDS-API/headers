#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/Vec3"
#include "../util/AABB"


class ButtonBlock : BlockLegacy {

public:
    virtual ButtonBlock::~ButtonBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isButtonBlock()const;
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getUIShape(Block const&, AABB &)const;
    virtual void getVariant(Block const&)const;
    virtual bool canSpawnOn()const;

    ButtonBlock(std::string const&, int, Material const&, bool);
    void _checkCanSurvive(BlockSource &, BlockPos const&)const;
    void _getShape(AABB &, bool, unsigned char, bool)const;
    void getTickDelay()const;
    bool canAttachTo(BlockSource &, BlockPos const&, unsigned char);
    void _buttonPressed(BlockSource &, Block const&, Vec3 const&)const;
    void _checkPressed(BlockSource &, BlockPos const&)const;
    void _buttonUnpressed(BlockSource &, Block const&, Vec3 const&)const;
};
