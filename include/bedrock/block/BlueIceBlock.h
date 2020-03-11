#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include <string>


class BlueIceBlock : BlockLegacy {

public:
    virtual ~BlueIceBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;

    BlueIceBlock(std::string const&, int);
};
