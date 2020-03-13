#pragma once

#include <string>
#include "BlockLegacy.h"


class StainedGlassBlock : BlockLegacy {

public:
    ~StainedGlassBlock(); // _ZN17StainedGlassBlockD2Ev
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK17StainedGlassBlock10canConnectERK5BlockhS2_
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK17StainedGlassBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK17StainedGlassBlock16getResourceCountER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK17StainedGlassBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK17StainedGlassBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK17StainedGlassBlock24getSilkTouchItemInstanceERK5Block
    StainedGlassBlock(std::string const&, int, Material const&, bool, bool); // _ZN17StainedGlassBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materialbb
};
