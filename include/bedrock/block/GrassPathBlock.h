#pragma once

#include <string>
#include "BlockLegacy.h"


class GrassPathBlock : BlockLegacy {

public:
    ~GrassPathBlock(); // _ZN14GrassPathBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK14GrassPathBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canBeOriginalSurface()const; // _ZNK14GrassPathBlock20canBeOriginalSurfaceEv
    virtual bool canContainLiquid()const; // _ZNK14GrassPathBlock16canContainLiquidEv
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK14GrassPathBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14GrassPathBlock15getResourceItemER6RandomRK5Blocki
    GrassPathBlock(std::string const&, int); // _ZN14GrassPathBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
