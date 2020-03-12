#pragma once

#include <string>
#include "BlockLegacy.h"


class MetalBlock : BlockLegacy {

public:
    ~MetalBlock();
    MetalBlock(std::string const&, int);
};
