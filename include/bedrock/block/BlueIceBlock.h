#pragma once

class BlueIceBlock : BlockLegacy {

public:
    virtual BlueIceBlock::~BlueIceBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;

    BlueIceBlock(std::string const&, int);
};
