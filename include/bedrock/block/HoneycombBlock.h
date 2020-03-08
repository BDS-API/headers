#pragma once

#include "../../unmapped/Material"


class HoneycombBlock : BlockLegacy {

public:
    virtual HoneycombBlock::~HoneycombBlock()

    HoneycombBlock(std::string const&, int, Material const&);
};
