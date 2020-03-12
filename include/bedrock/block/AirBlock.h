#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../actor/unmapped/ActorBlockSyncMessage.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class AirBlock : BlockLegacy {

public:
    ~AirBlock();
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void mayPick()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual bool canBeSilkTouched()const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual bool canHaveExtraData()const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    AirBlock(std::string const&, int, Material const&);
};
