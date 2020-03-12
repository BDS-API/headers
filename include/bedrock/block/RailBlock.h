#pragma once

#include <string>
#include "BaseRailBlock.h"


class RailBlock : BaseRailBlock {

public:
    virtual void getVariant(Block const&)const;
    ~RailBlock();
    RailBlock(std::string const&, int);
};
