#pragma once

#include <string>
#include "BlockLegacy.h"


class LightGemBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~LightGemBlock();
    LightGemBlock(std::string const&, int, Material const&);
};
