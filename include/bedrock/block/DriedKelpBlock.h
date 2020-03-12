#pragma once

#include <string>
#include "BlockLegacy.h"


class DriedKelpBlock : BlockLegacy {

public:
    ~DriedKelpBlock();
    DriedKelpBlock(std::string const&, int, Material const&);
};
