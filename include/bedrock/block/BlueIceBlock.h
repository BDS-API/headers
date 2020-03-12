#pragma once

#include <string>
#include "BlockLegacy.h"


class BlueIceBlock : BlockLegacy {

public:
    ~BlueIceBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    BlueIceBlock(std::string const&, int);
};
