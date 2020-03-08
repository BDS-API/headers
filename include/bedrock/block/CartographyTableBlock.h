#pragma once

#include "../actor/Player"


class CartographyTableBlock : BlockLegacy {

public:
    virtual CartographyTableBlock::~CartographyTableBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    CartographyTableBlock(std::string const&, int);
};
