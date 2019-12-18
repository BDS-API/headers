#pragma once

class ColoredBlock : BlockLegacy {

public:
    virtual ~ColoredBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void ColoredBlock(std::string const&, int, Material const&);
};
