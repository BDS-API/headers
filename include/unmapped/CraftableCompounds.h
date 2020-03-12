#pragma once

#include <string>
#include <vector>


class CraftableCompounds {

public:
//  virtual void _registerCompound(std::vector<ItemStack> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition
    ~CraftableCompounds();
//  void _registerCompound(std::vector<ChemistryIngredient> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition
    std::string _getCompoundId(std::vector<ItemStack> const&);
    CraftableCompounds();
    void getReaction(std::vector<ItemStack> const&);
//  void _registerCompound(std::vector<ChemistryIngredient> const&, CompoundType, LabTableReactionType, CompoundContainerType, int); //TODO: incomplete function definition
    void registerCompounds();
    void getContainerType(std::vector<ItemStack> const&);
    void getComponents(ItemDescriptor const&);
    void getCompound(std::vector<ItemStack> const&);
};
