#pragma once

class StoneBlock : BlockLegacy {

public:
    virtual ~StoneBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;

    void StoneBlock(std::string const&, int);
};
