#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class FurnaceBlock : ActorBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isCraftingBlock()const;
    ~FurnaceBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isContainerBlock()const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool hasComparatorSignal()const;
    virtual bool isInteractiveBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
//  void setLit(bool, BlockSource &, BlockPos const&, BlockActorType, Block const&, Block const&); //TODO: incomplete function definition
    FurnaceBlock(std::string const&, int, bool);
};
