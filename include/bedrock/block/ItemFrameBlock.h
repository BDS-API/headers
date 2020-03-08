#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../actor/Player"
#include "actor/BlockActor"
#include "../util/Vec3"
#include "../../unmapped/MapItemSavedData"
#include "../util/AABB"


class ItemFrameBlock : ActorBlock {

public:
    virtual ItemFrameBlock::~ItemFrameBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    ItemFrameBlock(std::string const&, int);
    void getShape(int, AABB &, bool)const;
    void _getItemFrame(BlockSource &, BlockPos const&)const;
    void _getFacingID(int)const;
    void _checkAchievements(Player &, BlockPos const&)const;
    void _addMapCollection(std::vector<MapItemSavedData *, std::allocator<MapItemSavedData *>> &, BlockPos const&, BlockSource &)const;
};
