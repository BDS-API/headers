#pragma once

#include "../util/Random"
#include "../../unmapped/Block"


class MelonBlock : BlockLegacy {

public:
    virtual MelonBlock::~MelonBlock()
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    MelonBlock(std::string const&, int);
};
