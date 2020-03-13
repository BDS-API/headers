#pragma once

#include <string>
#include "BlockLegacy.h"


class OreBlock : BlockLegacy {

public:
    ~OreBlock(); // _ZN8OreBlockD2Ev
    virtual bool canBeOriginalSurface()const; // _ZNK8OreBlock20canBeOriginalSurfaceEv
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK8OreBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK8OreBlock15getResourceItemER6RandomRK5Blocki
    virtual void getExperienceDrop(Random &)const; // _ZNK8OreBlock17getExperienceDropER6Random
    OreBlock(std::string const&, int); // _ZN8OreBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
