#pragma once

#include <string>
#include "ActorBlock.h"


class FurnaceBlock : ActorBlock {

public:
    ~FurnaceBlock(); // _ZN12FurnaceBlockD2Ev
    virtual bool isContainerBlock()const; // _ZNK12FurnaceBlock16isContainerBlockEv
    virtual bool isCraftingBlock()const; // _ZNK12FurnaceBlock15isCraftingBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK12FurnaceBlock18isInteractiveBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12FurnaceBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK12FurnaceBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12FurnaceBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12FurnaceBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK12FurnaceBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK12FurnaceBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool hasComparatorSignal()const; // _ZNK12FurnaceBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK12FurnaceBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK12FurnaceBlock13getMappedFaceEhRK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK12FurnaceBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12FurnaceBlock24getSilkTouchItemInstanceERK5Block
    FurnaceBlock(std::string const&, int, bool); // _ZN12FurnaceBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
//  void setLit(bool, BlockSource &, BlockPos const&, BlockActorType, Block const&, Block const&); //TODO: incomplete function definition // _ZN12FurnaceBlock6setLitEbR11BlockSourceRK8BlockPos14BlockActorTypeRK5BlockS8_
};
