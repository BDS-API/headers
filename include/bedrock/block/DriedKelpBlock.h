#pragma once

#include "BlockLegacy.h"
#include <string>
#include "../../unmapped/Material.h"


class DriedKelpBlock : BlockLegacy {

public:
    ~DriedKelpBlock();
    DriedKelpBlock(std::string const&, int, Material const&);
};
