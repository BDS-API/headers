#pragma once

#include "./BlockLegacy.h"
#include <string>


class MetalBlock : BlockLegacy {

public:
    virtual ~MetalBlock();

    MetalBlock(std::string const&, int);
};
