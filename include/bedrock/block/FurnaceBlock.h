#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/Player"
#include "../../unmapped/Random"


class FurnaceBlock : ActorBlock {

public:
    virtual FurnaceBlock::~FurnaceBlock();
    virtual bool isContainerBlock(void)const;
    virtual bool isCraftingBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    FurnaceBlock(std::string const&, int, bool);
    void setLit(bool, BlockSource &, BlockPos const&, BlockActorType, Block const&, Block const&);
};
