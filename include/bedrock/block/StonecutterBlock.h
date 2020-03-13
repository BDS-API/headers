#pragma once

#include <string>
#include "BlockLegacy.h"


class StonecutterBlock : BlockLegacy {

public:
    ~StonecutterBlock(); // _ZN16StonecutterBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK16StonecutterBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isCraftingBlock()const; // _ZNK16StonecutterBlock15isCraftingBlockEv
    virtual bool canContainLiquid()const; // _ZNK16StonecutterBlock16canContainLiquidEv
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK16StonecutterBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK16StonecutterBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK16StonecutterBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK16StonecutterBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK16StonecutterBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK16StonecutterBlock24getSilkTouchItemInstanceERK5Block
    StonecutterBlock(std::string const&, int); // _ZN16StonecutterBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
