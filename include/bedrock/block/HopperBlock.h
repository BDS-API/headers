#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class HopperBlock : ActorBlock {

public:
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool isInteractiveBlock()const;
    ~HopperBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual bool isContainerBlock()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    void getHopperBlockEntity(BlockSource &, BlockPos const&);
    void getAttachedOffset(unsigned char);
    HopperBlock(std::string const&, int);
    void _installCircuit(BlockSource &, BlockPos const&)const;
};
