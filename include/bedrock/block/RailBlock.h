#pragma once

#include "BaseRailBlock.h"
#include "../../unmapped/Block.h"
#include <string>


class RailBlock : BaseRailBlock {

public:
    virtual void getVariant(Block const&)const;
    ~RailBlock();
    RailBlock(std::string const&, int);
};
