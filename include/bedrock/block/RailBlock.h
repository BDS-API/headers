#pragma once

#include "../../unmapped/Block.h"
#include "./BaseRailBlock.h"
#include <string>


class RailBlock : BaseRailBlock {

public:
    virtual ~RailBlock();
    virtual void getVariant(Block const&)const;

    RailBlock(std::string const&, int);
};
