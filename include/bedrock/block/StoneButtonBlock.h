#pragma once

#include "./ButtonBlock.h"
#include <string>


class StoneButtonBlock : ButtonBlock {

public:
    virtual ~StoneButtonBlock();

    StoneButtonBlock(std::string const&, int);
};
