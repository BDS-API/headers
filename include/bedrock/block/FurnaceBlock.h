#pragma once

#include <string>
#include "ActorBlock.h"


class FurnaceBlock : ActorBlock {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isContainerBlock()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isInteractiveBlock()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    ~FurnaceBlock();
    virtual bool isCraftingBlock()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    FurnaceBlock(std::string const&, int, bool);
//  void setLit(bool, BlockSource &, BlockPos const&, BlockActorType, Block const&, Block const&); //TODO: incomplete function definition
};
