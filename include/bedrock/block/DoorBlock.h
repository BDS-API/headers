#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class DoorBlock : BlockLegacy {

public:
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    ~DoorBlock();
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;
    virtual void getVariant(Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isDoorBlock()const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    void setToggled(BlockSource &, BlockPos const&, bool)const;
    void getDir(BlockSource &, BlockPos const&)const;
    void getDoorBlocks(BlockSource &, BlockPos const&, Block const**, Block const**)const;
    bool isToggled(BlockSource &, BlockPos const&)const;
    void getDoorFacing(int);
    bool hasRightHinge(BlockSource &, BlockPos const&)const;
    void getDoorThickness()const;
//  DoorBlock(std::string const&, int, Material const&, DoorBlock::DoorType); //TODO: incomplete function definition
    void getBlockedDirection(BlockSource &, BlockPos const&)const;
    void getDoorPosition(BlockSource &, BlockPos const&, BlockPos &, BlockPos &)const;
    void shouldFlipTexture(BlockSource &, BlockPos const&, unsigned char)const;
//  void _isPlaceable(BlockPos const&, unsigned char, BlockSupportType, BlockSource &)const; //TODO: incomplete function definition
};
