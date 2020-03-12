#pragma once

#include "../../item/ItemStack.h"
#include "../../item/ItemInstance.h"
#include <vector>
#include "../../item/unmapped/ItemDescriptor.h"
#include "../../../unmapped/ChemistryIngredient.h"


class BlockReducer {

public:
    ~BlockReducer();
    virtual void _registerBlock(ItemStack const&, std::vector<ItemStack> &&);
    void _registerBlock(ItemStack const&, std::vector<ChemistryIngredient> const&);
    BlockReducer();
    void getReduction(ItemInstance const&);
    void _getBlockKey(ItemDescriptor const&);
    void registerBlocks();
};
