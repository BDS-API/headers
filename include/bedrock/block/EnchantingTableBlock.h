#pragma once

#include <string>
#include "ActorBlock.h"


class EnchantingTableBlock : ActorBlock {

public:
    ~EnchantingTableBlock(); // _ZN20EnchantingTableBlockD2Ev
    virtual bool isCraftingBlock()const; // _ZNK20EnchantingTableBlock15isCraftingBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK20EnchantingTableBlock18isInteractiveBlockEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK20EnchantingTableBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void use(Player &, BlockPos const&)const; // _ZNK20EnchantingTableBlock3useER6PlayerRK8BlockPos
    EnchantingTableBlock(std::string const&, int); // _ZN20EnchantingTableBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
