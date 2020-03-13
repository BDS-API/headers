#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class BrewingStandBlock : ActorBlock {

public:
    ~BrewingStandBlock(); // _ZN17BrewingStandBlockD2Ev
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK17BrewingStandBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK17BrewingStandBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK17BrewingStandBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual bool isContainerBlock()const; // _ZNK17BrewingStandBlock16isContainerBlockEv
    virtual bool isCraftingBlock()const; // _ZNK17BrewingStandBlock15isCraftingBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK17BrewingStandBlock18isInteractiveBlockEv
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK17BrewingStandBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK17BrewingStandBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17BrewingStandBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK17BrewingStandBlock3useER6PlayerRK8BlockPos
    virtual bool hasComparatorSignal()const; // _ZNK17BrewingStandBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK17BrewingStandBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK17BrewingStandBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17BrewingStandBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    BrewingStandBlock(std::string const&, int); // _ZN17BrewingStandBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
