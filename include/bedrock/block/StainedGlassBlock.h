#pragma once

class StainedGlassBlock : BlockLegacy {

public:
    virtual StainedGlassBlock::~StainedGlassBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StainedGlassBlock(std::string const&, int, Material const&, bool, bool);
};