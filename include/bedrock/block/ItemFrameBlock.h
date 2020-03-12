#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "actor/BlockActor.h"
#include "ActorBlock.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/MapItemSavedData.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../actor/Player.h"
#include "../util/Random.h"


class ItemFrameBlock : ActorBlock {

public:
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    ~ItemFrameBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool isWaterBlocking()const;
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    void _addMapCollection(std::vector<MapItemSavedData *> &, BlockPos const&, BlockSource &)const;
    void _checkAchievements(Player &, BlockPos const&)const;
    void _getItemFrame(BlockSource &, BlockPos const&)const;
    void _getFacingID(int)const;
    void getShape(int, AABB &, bool)const;
    ItemFrameBlock(std::string const&, int);
};
