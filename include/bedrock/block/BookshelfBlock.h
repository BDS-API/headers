#pragma once

#include <string>
#include "BlockLegacy.h"


class BookshelfBlock : BlockLegacy {

public:
    ~BookshelfBlock(); // _ZN14BookshelfBlockD2Ev
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK14BookshelfBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14BookshelfBlock15getResourceItemER6RandomRK5Blocki
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK14BookshelfBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    BookshelfBlock(std::string const&, int); // _ZN14BookshelfBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
