#pragma once

#include <string>
#include "ActorBlock.h"


class EnchantingTableBlock : public ActorBlock {

public:
    virtual ~EnchantingTableBlock(); // _ZN20EnchantingTableBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isCraftingBlock()const; // _ZNK20EnchantingTableBlock15isCraftingBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK20EnchantingTableBlock18isInteractiveBlockEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK20EnchantingTableBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void use(Player &, BlockPos const&)const; // _ZNK20EnchantingTableBlock3useER6PlayerRK8BlockPos
    EnchantingTableBlock(std::string const&, int); // _ZN20EnchantingTableBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
