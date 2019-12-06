#pragma once

class CraftableCompounds {

public:
    virtual ~CraftableCompounds();
    virtual void _registerCompound(std::vector<ItemStack, std::allocator<ItemStack>> const&, ItemStack const&, LabTableReactionType, CompoundContainerType);

    void getCompound(std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void getComponents(ItemDescriptor const&);
    void getReaction(std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void getContainerType(std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void CraftableCompounds(void);
    void registerCompounds(void);
    void _registerCompound(std::vector<ChemistryIngredient, std::allocator<ChemistryIngredient>> const&, CompoundType, LabTableReactionType, CompoundContainerType, int);
    void _registerCompound(std::vector<ChemistryIngredient, std::allocator<ChemistryIngredient>> const&, ItemStack const&, LabTableReactionType, CompoundContainerType);
};
