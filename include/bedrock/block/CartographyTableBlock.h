#pragma once

#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "./BlockLegacy.h"
#include <string>


class CartographyTableBlock : BlockLegacy {

public:
    virtual ~CartographyTableBlock();
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;

    CartographyTableBlock(std::string const&, int);
};
