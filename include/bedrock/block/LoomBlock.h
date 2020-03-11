#pragma once

#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "./FaceDirectionalBlock.h"
#include <string>


class LoomBlock : FaceDirectionalBlock {

public:
    virtual ~LoomBlock();
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;

    LoomBlock(std::string const&, int);
};
