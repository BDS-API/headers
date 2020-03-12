#pragma once

#include <string>
#include "FaceDirectionalBlock.h"
#include "../actor/Player.h"
#include "../util/BlockPos.h"


class LoomBlock : FaceDirectionalBlock {

public:
    ~LoomBlock();
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    LoomBlock(std::string const&, int);
};
