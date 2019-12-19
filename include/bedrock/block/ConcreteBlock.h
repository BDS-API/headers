#pragma once

class ConcreteBlock : BlockLegacy {

public:
    virtual ConcreteBlock::~ConcreteBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    ConcreteBlock(std::string const&, int);
};
