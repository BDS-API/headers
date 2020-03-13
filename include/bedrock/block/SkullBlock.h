#pragma once

#include <string>
#include "ActorBlock.h"


class SkullBlock : ActorBlock {

public:
    ~SkullBlock(); // _ZN10SkullBlockD2Ev
    virtual void waterSpreadCausesSpawn()const; // _ZNK10SkullBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK10SkullBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10SkullBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK10SkullBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK10SkullBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK10SkullBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK10SkullBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10SkullBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK10SkullBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10SkullBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK10SkullBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK10SkullBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK10SkullBlock16canBeSilkTouchedEv
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const; // _ZNK10SkullBlock21getEntityResourceItemER6RandomRK10BlockActori
    SkullBlock(std::string const&, int); // _ZN10SkullBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    std::string getTypeDescriptionId(int); // _ZN10SkullBlock20getTypeDescriptionIdB5cxx11Ei
    void _witherSkullTester(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10SkullBlock18_witherSkullTesterER11BlockSourceRK8BlockPosRK5Block
    void _updatedDragonCircuit(BlockSource &, BlockPos const&)const; // _ZNK10SkullBlock21_updatedDragonCircuitER11BlockSourceRK8BlockPos
    void checkMobSpawn(Level &, BlockSource &, BlockPos const&, SkullBlockActor &)const; // _ZNK10SkullBlock13checkMobSpawnER5LevelR11BlockSourceRK8BlockPosR15SkullBlockActor
};
