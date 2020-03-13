#pragma once

#include "RotatedPillarBlock.h"
#include <string>


class LogBlock : RotatedPillarBlock {

public:
    ~LogBlock(); // _ZN8LogBlockD2Ev
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK8LogBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK8LogBlock16getResourceCountER6RandomRK5Blocki
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK8LogBlock28isAuxValueRelevantForPickingEv
    LogBlock(std::string const&, int); // _ZN8LogBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
