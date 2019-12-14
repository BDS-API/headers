#pragma once

class SandStoneBlock : BlockLegacy {

public:
    virtual ~SandStoneBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void SandStoneBlock(std::string const&, int, Material const&);
};
