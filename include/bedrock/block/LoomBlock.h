#pragma once

#include <string>
#include "FaceDirectionalBlock.h"


class LoomBlock : FaceDirectionalBlock {

public:
    virtual void use(Player &, BlockPos const&)const;
    ~LoomBlock();
    virtual bool isCraftingBlock()const;
    LoomBlock(std::string const&, int);
};
