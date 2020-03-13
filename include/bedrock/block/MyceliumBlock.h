#pragma once

#include <string>
#include "BlockLegacy.h"


class MyceliumBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    ~MyceliumBlock(); // _ZN13MyceliumBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13MyceliumBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13MyceliumBlock15getResourceItemER6RandomRK5Blocki
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13MyceliumBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    MyceliumBlock(std::string const&, int); // _ZN13MyceliumBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
