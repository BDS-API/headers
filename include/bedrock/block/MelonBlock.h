#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include <string>


class MelonBlock : BlockLegacy {

public:
    virtual ~MelonBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    MelonBlock(std::string const&, int);
};
