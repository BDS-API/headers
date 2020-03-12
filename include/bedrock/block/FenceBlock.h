#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class FenceBlock : BlockLegacy {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool canBeSilkTouched()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    ~FenceBlock();
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isFenceBlock()const;
    FenceBlock(std::string const&, int, Material const&);
    void fetchPathableNeighbors(std::vector<BlockPos> &, BlockSource &, BlockPos const&, Vec3 const&)const;
};
