#pragma once

class StainedGlassPaneBlock : ThinFenceBlock {

public:
    virtual ~StainedGlassPaneBlock();
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool);
};
