#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class BlockPlanterItem : Item {

public:
    ~BlockPlanterItem(); // _ZN16BlockPlanterItemD2Ev
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK16BlockPlanterItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK16BlockPlanterItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BlockPlanterItem(std::string const&, int, Block const&, bool); // _ZN16BlockPlanterItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK5Blockb
    bool canUseOn(ItemInstance const&, Actor &, BlockPos, unsigned char)const; // _ZNK16BlockPlanterItem8canUseOnERK12ItemInstanceR5Actor8BlockPosh
};
