#pragma once

#include <vector>


class BlockReducer {

public:
    virtual void _registerBlock(ItemStack const&, std::vector<ItemStack> &&);
    ~BlockReducer();
    void getReduction(ItemInstance const&);
    void _registerBlock(ItemStack const&, std::vector<ChemistryIngredient> const&);
    void registerBlocks();
    void _getBlockKey(ItemDescriptor const&);
    BlockReducer();
};
