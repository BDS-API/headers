#pragma once

#include <string>
#include "ActorBlock.h"


class StructureBlock : ActorBlock {

public:
    ~StructureBlock(); // _ZN14StructureBlockD2Ev
    virtual bool isInteractiveBlock()const; // _ZNK14StructureBlock18isInteractiveBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK14StructureBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK14StructureBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK14StructureBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK14StructureBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14StructureBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK14StructureBlock3useER6PlayerRK8BlockPos
    StructureBlock(std::string const&, int); // _ZN14StructureBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
