#pragma once

#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include "ChemistryIngredient.h"


class CraftableCompounds {

public:
    ~CraftableCompounds();
//  virtual void _registerCompound(std::vector<ItemStack> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition
    CraftableCompounds();
    void registerCompounds();
//  void _registerCompound(std::vector<ChemistryIngredient> const&, CompoundType, LabTableReactionType, CompoundContainerType, int); //TODO: incomplete function definition
    std::string _getCompoundId(std::vector<ItemStack> const&);
//  void _registerCompound(std::vector<ChemistryIngredient> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition
    void getReaction(std::vector<ItemStack> const&);
    void getComponents(ItemDescriptor const&);
    void getContainerType(std::vector<ItemStack> const&);
    void getCompound(std::vector<ItemStack> const&);
};
