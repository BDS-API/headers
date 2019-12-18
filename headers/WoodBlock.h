#pragma once

class WoodBlock : RotatedPillarBlock {

public:
    virtual ~WoodBlock();
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void WoodBlock(std::string const&, int);
    void _createBlockWithStates(Block const&)const;
};
