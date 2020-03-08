#pragma once

#include "../util/BlockPos"
#include "../actor/Player"


class CartographyTableBlock : BlockLegacy {

public:
    CartographyTableBlock::~CartographyTableBlock()
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;

    CartographyTableBlock(std::string const&, int);
};
