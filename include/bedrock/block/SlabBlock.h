#pragma once

#include <string>
#include <functional>
#include "BlockLegacy.h"


class SlabBlock : BlockLegacy {

public:
    ~SlabBlock(); // _ZN9SlabBlockD2Ev
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const; // _ZNK9SlabBlock19isObstructingChestsER11BlockSourceRK8BlockPos
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const; // _ZNK9SlabBlock30liquidCanFlowIntoFromDirectionEhRKSt8functionIFRK5BlockRK8BlockPosEES6_
    virtual bool isSlabBlock()const; // _ZNK9SlabBlock11isSlabBlockEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK9SlabBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const; // _ZNK9SlabBlock19getRedstonePropertyER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9SlabBlock16getResourceCountER6RandomRK5Blocki
    virtual void getExplosionResistance(Actor *)const; // _ZNK9SlabBlock22getExplosionResistanceEP5Actor
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK9SlabBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const; // _ZNK9SlabBlock13getMobToSpawnERK15SpawnConditionsR11BlockSource
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK9SlabBlock28isAuxValueRelevantForPickingEv
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK9SlabBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK9SlabBlock16canBeSilkTouchedEv
//  SlabBlock(std::string const&, int, bool, Material const&, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN9SlabBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEibRK8Material7WeakPtrI11BlockLegacyE
    void getBaseSlab()const; // _ZNK9SlabBlock11getBaseSlabEv
};
