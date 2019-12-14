#pragma once

class CartographyTableBlock : BlockLegacy {

public:
    virtual ~CartographyTableBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void CartographyTableBlock(std::string const&, int);
};
