#pragma once

#include <string>
#include "BlockLegacy.h"


class CartographyTableBlock : BlockLegacy {

public:
    ~CartographyTableBlock();
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    CartographyTableBlock(std::string const&, int);
};
