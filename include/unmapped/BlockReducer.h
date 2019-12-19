#pragma once

class BlockReducer {

public:
    virtual BlockReducer::~BlockReducer();
    virtual void _registerBlock(ItemStack const&, std::vector<ItemStack, std::allocator<ItemStack>> &&);

    BlockReducer(void);
    void getReduction(ItemInstance const&);
    void _getBlockKey(ItemDescriptor const&);
    void registerBlocks(void);
    void _registerBlock(ItemStack const&, std::vector<ChemistryIngredient, std::allocator<ChemistryIngredient>> const&);
};
