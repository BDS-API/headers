#pragma once

class GlassBlock : BlockLegacy {

public:
    virtual GlassBlock::~GlassBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;

    GlassBlock(std::string const&, int, Material const&, bool, bool);
};
