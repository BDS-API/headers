#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class ItemFrameBlock : ActorBlock {

public:
    ~ItemFrameBlock(); // _ZN14ItemFrameBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK14ItemFrameBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK14ItemFrameBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isInteractiveBlock()const; // _ZNK14ItemFrameBlock18isInteractiveBlockEv
    virtual bool isWaterBlocking()const; // _ZNK14ItemFrameBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK14ItemFrameBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK14ItemFrameBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK14ItemFrameBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK14ItemFrameBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK14ItemFrameBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK14ItemFrameBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const; // _ZNK14ItemFrameBlock28getIgnoresDestroyPermissionsER5ActorRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK14ItemFrameBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14ItemFrameBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14ItemFrameBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK14ItemFrameBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void use(Player &, BlockPos const&)const; // _ZNK14ItemFrameBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK14ItemFrameBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void attack(Player *, BlockPos const&)const; // _ZNK14ItemFrameBlock6attackEP6PlayerRK8BlockPos
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK14ItemFrameBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual bool hasComparatorSignal()const; // _ZNK14ItemFrameBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK14ItemFrameBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK14ItemFrameBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const; // _ZNK14ItemFrameBlock21getEntityResourceItemER6RandomRK10BlockActori
    ItemFrameBlock(std::string const&, int); // _ZN14ItemFrameBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getShape(int, AABB &, bool)const; // _ZNK14ItemFrameBlock8getShapeEiR4AABBb
    void _getItemFrame(BlockSource &, BlockPos const&)const; // _ZNK14ItemFrameBlock13_getItemFrameER11BlockSourceRK8BlockPos
    void _getFacingID(int)const; // _ZNK14ItemFrameBlock12_getFacingIDEi
    void _checkAchievements(Player &, BlockPos const&)const; // _ZNK14ItemFrameBlock18_checkAchievementsER6PlayerRK8BlockPos
    void _addMapCollection(std::vector<MapItemSavedData *> &, BlockPos const&, BlockSource &)const; // _ZNK14ItemFrameBlock17_addMapCollectionERSt6vectorIP16MapItemSavedDataSaIS2_EERK8BlockPosR11BlockSource
};
