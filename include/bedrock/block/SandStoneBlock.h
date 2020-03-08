#pragma once

#include "../../unmapped/Random"
#include "../../unmapped/Block"


class SandStoneBlock : BlockLegacy {

public:
    virtual SandStoneBlock::~SandStoneBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    SandStoneBlock(std::string const&, int, Material const&);
};
