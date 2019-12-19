#pragma once

class StoneBlock : BlockLegacy {

public:
    virtual StoneBlock::~StoneBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;

    StoneBlock(std::string const&, int);
};
