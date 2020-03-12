#pragma once

#include "BlockLegacy.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"
#include <string>


class BlueIceBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~BlueIceBlock();
    BlueIceBlock(std::string const&, int);
};
