#pragma once

#include <string>
#include "BlockLegacy.h"


class DoorBlock : BlockLegacy {

public:
    virtual bool isInteractiveBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool isDoorBlock()const;
    ~DoorBlock();
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    bool isToggled(BlockSource &, BlockPos const&)const;
    bool hasRightHinge(BlockSource &, BlockPos const&)const;
    void shouldFlipTexture(BlockSource &, BlockPos const&, unsigned char)const;
    void getDir(BlockSource &, BlockPos const&)const;
//  DoorBlock(std::string const&, int, Material const&, DoorBlock::DoorType); //TODO: incomplete function definition
    void getDoorThickness()const;
    void getBlockedDirection(BlockSource &, BlockPos const&)const;
    void getDoorBlocks(BlockSource &, BlockPos const&, Block const**, Block const**)const;
    void getDoorPosition(BlockSource &, BlockPos const&, BlockPos &, BlockPos &)const;
    void getDoorFacing(int);
//  void _isPlaceable(BlockPos const&, unsigned char, BlockSupportType, BlockSource &)const; //TODO: incomplete function definition
    void setToggled(BlockSource &, BlockPos const&, bool)const;
};
