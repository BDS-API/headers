#pragma once

class SeaLanternBlock : BlockLegacy {

public:
    virtual SeaLanternBlock::~SeaLanternBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched(void)const;

    SeaLanternBlock(std::string const&, int);
};
