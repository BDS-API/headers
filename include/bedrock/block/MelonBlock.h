#pragma once

#include <string>
#include "BlockLegacy.h"


class MelonBlock : BlockLegacy {

public:
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~MelonBlock();
    MelonBlock(std::string const&, int);
};
