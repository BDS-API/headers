#pragma once

#include <string>
#include "BlockLegacy.h"


class HoneycombBlock : BlockLegacy {

public:
    ~HoneycombBlock();
    HoneycombBlock(std::string const&, int, Material const&);
};
