#pragma once

#include <string>
#include "BlockLegacy.h"


class TripWireHookBlock : BlockLegacy {

public:
    ~TripWireHookBlock(); // _ZN17TripWireHookBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17TripWireHookBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK17TripWireHookBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK17TripWireHookBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK17TripWireHookBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK17TripWireHookBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK17TripWireHookBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK17TripWireHookBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK17TripWireHookBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK17TripWireHookBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK17TripWireHookBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17TripWireHookBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK17TripWireHookBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK17TripWireHookBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK17TripWireHookBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canSpawnOn()const; // _ZNK17TripWireHookBlock10canSpawnOnEv
    TripWireHookBlock(std::string const&, int); // _ZN17TripWireHookBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getShape(int, AABB &)const; // _ZNK17TripWireHookBlock9_getShapeEiR4AABB
    void getTickDelay()const; // _ZNK17TripWireHookBlock12getTickDelayEv
    void calculateState(BlockSource &, BlockPos const&, bool, bool, int, Block const&)const; // _ZNK17TripWireHookBlock14calculateStateER11BlockSourceRK8BlockPosbbiRK5Block
    void playSound(BlockSource &, BlockPos const&, bool, bool, bool, bool)const; // _ZNK17TripWireHookBlock9playSoundER11BlockSourceRK8BlockPosbbbb
};
