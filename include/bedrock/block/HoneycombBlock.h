#pragma once

#include "BlockLegacy.h"
#include <string>
#include "../../unmapped/Material.h"


class HoneycombBlock : BlockLegacy {

public:
    ~HoneycombBlock();
    HoneycombBlock(std::string const&, int, Material const&);
};
