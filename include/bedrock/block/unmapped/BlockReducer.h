#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include <memory>
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include <vector>
#include "../../../unmapped/ChemistryIngredient.h"


class BlockReducer {

public:
    virtual ~BlockReducer();
    virtual void _registerBlock(ItemStack const&, std::vector<ItemStack, std::allocator<ItemStack>> &&);

    BlockReducer();
    void getReduction(ItemInstance const&);
    void _getBlockKey(ItemDescriptor const&);
    void registerBlocks();
    void _registerBlock(ItemStack const&, std::vector<ChemistryIngredient, std::allocator<ChemistryIngredient>> const&);
};
