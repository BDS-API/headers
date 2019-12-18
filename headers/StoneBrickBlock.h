#pragma once

class StoneBrickBlock : BlockLegacy {

public:
    virtual ~StoneBrickBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StoneBrickBlock(std::string const&, int, Material const&);
};
