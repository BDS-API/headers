#pragma once

#include "ButtonBlock.h"
#include <string>


class WoodButtonBlock : ButtonBlock {

public:
    ~WoodButtonBlock();
    WoodButtonBlock(std::string const&, int);
};
