#pragma once

#include "ChestBlock.h"
#include <memory>
#include <string>


class ShulkerBoxBlock : ChestBlock {

public:
    ~ShulkerBoxBlock(); // _ZN15ShulkerBoxBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK15ShulkerBoxBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK15ShulkerBoxBlock8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK15ShulkerBoxBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK15ShulkerBoxBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15ShulkerBoxBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15ShulkerBoxBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK15ShulkerBoxBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK15ShulkerBoxBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK15ShulkerBoxBlock28isAuxValueRelevantForPickingEv
    virtual void getColor(Block const&)const; // _ZNK15ShulkerBoxBlock8getColorERK5Block
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15ShulkerBoxBlock19getColorForParticleER11BlockSourceRK8BlockPosRK5Block
    ShulkerBoxBlock(std::string const&, int); // _ZN15ShulkerBoxBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void spawnBoxInstance(BlockSource &, Level &, BlockPos const&, Block const&, std::string const&, std::unique_ptr<CompoundTag>, int)const; // _ZNK15ShulkerBoxBlock16spawnBoxInstanceER11BlockSourceR5LevelRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI11CompoundTagSt14default_deleteISJ_EEi
};
