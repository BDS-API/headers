#pragma once

class StainedGlassPaneBlock : ThinFenceBlock {

public:
    virtual StainedGlassPaneBlock::~StainedGlassPaneBlock();
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool);
};
