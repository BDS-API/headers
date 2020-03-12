#pragma once

#include "BlockLegacy.h"
#include <string>


class MetalBlock : BlockLegacy {

public:
    ~MetalBlock();
    MetalBlock(std::string const&, int);
};
