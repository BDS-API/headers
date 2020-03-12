#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class ItemFrameBlock : ActorBlock {

public:
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~ItemFrameBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isInteractiveBlock()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool isWaterBlocking()const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    void _addMapCollection(std::vector<MapItemSavedData *> &, BlockPos const&, BlockSource &)const;
    void _getItemFrame(BlockSource &, BlockPos const&)const;
    void getShape(int, AABB &, bool)const;
    ItemFrameBlock(std::string const&, int);
    void _getFacingID(int)const;
    void _checkAchievements(Player &, BlockPos const&)const;
};
