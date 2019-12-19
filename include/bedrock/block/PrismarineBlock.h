#pragma once

class PrismarineBlock : BlockLegacy {

public:
    virtual PrismarineBlock::~PrismarineBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;

    PrismarineBlock(std::string const&, int);
};
