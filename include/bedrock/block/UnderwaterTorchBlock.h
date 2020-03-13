#pragma once

#include <string>
#include "TorchBlock.h"


class UnderwaterTorchBlock : TorchBlock {

public:
    ~UnderwaterTorchBlock(); // _ZN20UnderwaterTorchBlockD2Ev
    virtual bool isWaterBlocking()const; // _ZNK20UnderwaterTorchBlock15isWaterBlockingEv
    virtual bool canContainLiquid()const; // _ZNK20UnderwaterTorchBlock16canContainLiquidEv
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK20UnderwaterTorchBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK20UnderwaterTorchBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK20UnderwaterTorchBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    UnderwaterTorchBlock(std::string const&, int); // _ZN20UnderwaterTorchBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
