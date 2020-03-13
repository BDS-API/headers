#pragma once

#include <string>
#include "BlockLegacy.h"


class GlassBlock : BlockLegacy {

public:
    ~GlassBlock(); // _ZN10GlassBlockD2Ev
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK10GlassBlock10canConnectERK5BlockhS2_
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK10GlassBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK10GlassBlock16getResourceCountER6RandomRK5Blocki
    GlassBlock(std::string const&, int, Material const&, bool, bool); // _ZN10GlassBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materialbb
};
