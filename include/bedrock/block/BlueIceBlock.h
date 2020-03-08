#pragma once

#include "../util/Random"
#include "../../unmapped/Block"


class BlueIceBlock : BlockLegacy {

public:
    BlueIceBlock::~BlueIceBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;

    BlueIceBlock(std::string const&, int);
};
