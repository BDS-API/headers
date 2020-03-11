#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include <memory>
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include <vector>
#include "../util/Vec3.h"
#include "../util/AABB.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class HopperBlock : ActorBlock {

public:
    virtual ~HopperBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool isContainerBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;

    void getAttachedOffset(unsigned char);
    void getHopperBlockEntity(BlockSource &, BlockPos const&);
    HopperBlock(std::string const&, int);
    void _installCircuit(BlockSource &, BlockPos const&)const;
};
