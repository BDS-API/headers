#pragma once

#include "../util/Random"
#include "../../unmapped/Material"
#include "../../unmapped/Block"


class LightGemBlock : BlockLegacy {

public:
    virtual LightGemBlock::~LightGemBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    LightGemBlock(std::string const&, int, Material const&);
};
