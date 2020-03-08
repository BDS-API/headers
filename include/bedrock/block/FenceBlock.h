#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../../unmapped/Material"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class FenceBlock : BlockLegacy {

public:
    FenceBlock::~FenceBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isFenceBlock()const;
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;

    FenceBlock(std::string const&, int, Material const&);
    void fetchPathableNeighbors(std::vector<BlockPos, std::allocator<BlockPos>> &, BlockSource &, BlockPos const&, Vec3 const&)const;
};
