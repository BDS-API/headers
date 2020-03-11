#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Material.h"
#include <string>


class HoneycombBlock : BlockLegacy {

public:
    virtual ~HoneycombBlock();

    HoneycombBlock(std::string const&, int, Material const&);
};
