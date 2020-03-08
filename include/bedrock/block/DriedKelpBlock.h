#pragma once

#include "../../unmapped/Material"


class DriedKelpBlock : BlockLegacy {

public:
    virtual DriedKelpBlock::~DriedKelpBlock()

    DriedKelpBlock(std::string const&, int, Material const&);
};
