#pragma once

#include <string>
#include "BlockLegacy.h"


class TripWireBlock : BlockLegacy {

public:
    ~TripWireBlock(); // _ZN13TripWireBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13TripWireBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK13TripWireBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13TripWireBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK13TripWireBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK13TripWireBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13TripWireBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13TripWireBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK13TripWireBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK13TripWireBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK13TripWireBlock24getSilkTouchItemInstanceERK5Block
    TripWireBlock(std::string const&, int); // _ZN13TripWireBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getTickDelay()const; // _ZNK13TripWireBlock12getTickDelayEv
    void updateSource(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13TripWireBlock12updateSourceER11BlockSourceRK8BlockPosRK5Block
    void checkPressed(BlockSource &, BlockPos const&)const; // _ZNK13TripWireBlock12checkPressedER11BlockSourceRK8BlockPos
    void shouldConnectTo(BlockSource &, BlockPos const&, int)const; // _ZNK13TripWireBlock15shouldConnectToER11BlockSourceRK8BlockPosi
};
