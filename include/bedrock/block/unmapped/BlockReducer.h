#pragma once

#include "../../../unmapped/ChemistryIngredient"
#include "../../item/ItemInstance"
#include "../../item/unmapped/ItemDescriptor"
#include "../../item/ItemStack"


class BlockReducer {

public:
    virtual BlockReducer::~BlockReducer()
    virtual void _registerBlock(ItemStack const&, std::vector<ItemStack, std::allocator<ItemStack>> &&);

    BlockReducer(void);
    void getReduction(ItemInstance const&);
    void _getBlockKey(ItemDescriptor const&);
    void registerBlocks();
    void _registerBlock(ItemStack const&, std::vector<ChemistryIngredient, std::allocator<ChemistryIngredient>> const&);
};
