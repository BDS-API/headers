#pragma once

#include <string>
#include "BlockLegacy.h"
#include "../actor/Player.h"
#include "../util/BlockPos.h"


class CartographyTableBlock : BlockLegacy {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isCraftingBlock()const;
    ~CartographyTableBlock();
    CartographyTableBlock(std::string const&, int);
};
