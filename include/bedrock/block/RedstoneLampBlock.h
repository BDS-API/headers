#pragma once

#include <string>
#include "BlockLegacy.h"


class RedstoneLampBlock : BlockLegacy {

public:
    ~RedstoneLampBlock(); // _ZN17RedstoneLampBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17RedstoneLampBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK17RedstoneLampBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK17RedstoneLampBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK17RedstoneLampBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK17RedstoneLampBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK17RedstoneLampBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17RedstoneLampBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK17RedstoneLampBlock24getSilkTouchItemInstanceERK5Block
    RedstoneLampBlock(std::string const&, int, bool); // _ZN17RedstoneLampBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
};
