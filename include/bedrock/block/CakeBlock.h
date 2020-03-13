#pragma once

#include <string>
#include "BlockLegacy.h"


class CakeBlock : BlockLegacy {

public:
    ~CakeBlock(); // _ZN9CakeBlockD2Ev
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK9CakeBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK9CakeBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9CakeBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9CakeBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9CakeBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK9CakeBlock3useER6PlayerRK8BlockPos
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9CakeBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual bool hasComparatorSignal()const; // _ZNK9CakeBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK9CakeBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK9CakeBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK9CakeBlock16canBeSilkTouchedEv
    CakeBlock(std::string const&, int); // _ZN9CakeBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _removeCakeSlice(Player &, BlockSource &, BlockPos const&)const; // _ZNK9CakeBlock16_removeCakeSliceER6PlayerR11BlockSourceRK8BlockPos
};
