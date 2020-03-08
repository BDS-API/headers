#pragma once

#include "../util/Random"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class LightGemBlock : BlockLegacy {

public:
    LightGemBlock::~LightGemBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    LightGemBlock(std::string const&, int, Material const&);
};
