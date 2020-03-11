#pragma once

#include "./ButtonBlock.h"
#include <string>


class WoodButtonBlock : ButtonBlock {

public:
    virtual ~WoodButtonBlock();

    WoodButtonBlock(std::string const&, int);
};
