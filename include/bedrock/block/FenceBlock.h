#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class FenceBlock : BlockLegacy {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~FenceBlock();
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual bool canContainLiquid()const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isFenceBlock()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual std::string buildDescriptionId(Block const&)const;
    FenceBlock(std::string const&, int, Material const&);
    void fetchPathableNeighbors(std::vector<BlockPos> &, BlockSource &, BlockPos const&, Vec3 const&)const;
};
