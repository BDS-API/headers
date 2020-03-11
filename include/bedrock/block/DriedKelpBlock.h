#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Material.h"
#include <string>


class DriedKelpBlock : BlockLegacy {

public:
    virtual ~DriedKelpBlock();

    DriedKelpBlock(std::string const&, int, Material const&);
};
