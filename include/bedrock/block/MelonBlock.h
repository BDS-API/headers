#pragma once

#include <string>
#include "BlockLegacy.h"


class MelonBlock : BlockLegacy {

public:
    ~MelonBlock(); // _ZN10MelonBlockD2Ev
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK10MelonBlock10canConnectERK5BlockhS2_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK10MelonBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10MelonBlock15getResourceItemER6RandomRK5Blocki
    MelonBlock(std::string const&, int); // _ZN10MelonBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
