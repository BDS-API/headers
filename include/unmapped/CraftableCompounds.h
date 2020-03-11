#pragma once

#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include "./ChemistryIngredient.h"
#include <vector>
#include <string>


class CraftableCompounds {

public:
    virtual ~CraftableCompounds();
//  virtual void _registerCompound(std::vector<ItemStack, std::allocator<ItemStack>> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition

    void getCompound(std::vector<ItemStack, std::allocator<ItemStack>> const&);
    std::string _getCompoundId(std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void getComponents(ItemDescriptor const&);
    void getReaction(std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void getContainerType(std::vector<ItemStack, std::allocator<ItemStack>> const&);
    CraftableCompounds();
    void registerCompounds();
//  void _registerCompound(std::vector<ChemistryIngredient, std::allocator<ChemistryIngredient>> const&, CompoundType, LabTableReactionType, CompoundContainerType, int); //TODO: incomplete function definition
//  void _registerCompound(std::vector<ChemistryIngredient, std::allocator<ChemistryIngredient>> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition
};
