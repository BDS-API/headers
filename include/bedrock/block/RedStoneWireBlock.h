#pragma once

#include <string>
#include "BlockLegacy.h"


class RedStoneWireBlock : BlockLegacy {

public:
    ~RedStoneWireBlock(); // _ZN17RedStoneWireBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17RedStoneWireBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK17RedStoneWireBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK17RedStoneWireBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK17RedStoneWireBlock16canContainLiquidEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK17RedStoneWireBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK17RedStoneWireBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK17RedStoneWireBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK17RedStoneWireBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK17RedStoneWireBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK17RedStoneWireBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK17RedStoneWireBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17RedStoneWireBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK17RedStoneWireBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getColor(Block const&)const; // _ZNK17RedStoneWireBlock8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17RedStoneWireBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual bool canSpawnOn()const; // _ZNK17RedStoneWireBlock10canSpawnOnEv
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17RedStoneWireBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK17RedStoneWireBlock24getSilkTouchItemInstanceERK5Block
    RedStoneWireBlock(std::string const&, int); // _ZN17RedStoneWireBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void shouldConnectTo(BlockSource &, BlockPos const&, int); // _ZN17RedStoneWireBlock15shouldConnectToER11BlockSourceRK8BlockPosi
};
