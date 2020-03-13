#pragma once

#include <string>
#include <vector>


class CraftableCompounds {

public:
    ~CraftableCompounds(); // _ZN18CraftableCompoundsD2Ev
//  virtual void _registerCompound(std::vector<ItemStack> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition // _ZN18CraftableCompounds17_registerCompoundERKSt6vectorI9ItemStackSaIS1_EERKS1_20LabTableReactionType21CompoundContainerType
    void getCompound(std::vector<ItemStack> const&); // _ZN18CraftableCompounds11getCompoundERKSt6vectorI9ItemStackSaIS1_EE
    std::string _getCompoundId(std::vector<ItemStack> const&); // _ZN18CraftableCompounds14_getCompoundIdB5cxx11ERKSt6vectorI9ItemStackSaIS1_EE
    void getComponents(ItemDescriptor const&); // _ZN18CraftableCompounds13getComponentsERK14ItemDescriptor
    void getReaction(std::vector<ItemStack> const&); // _ZN18CraftableCompounds11getReactionERKSt6vectorI9ItemStackSaIS1_EE
    void getContainerType(std::vector<ItemStack> const&); // _ZN18CraftableCompounds16getContainerTypeERKSt6vectorI9ItemStackSaIS1_EE
    CraftableCompounds(); // _ZN18CraftableCompoundsC2Ev
    void registerCompounds(); // _ZN18CraftableCompounds17registerCompoundsEv
//  void _registerCompound(std::vector<ChemistryIngredient> const&, CompoundType, LabTableReactionType, CompoundContainerType, int); //TODO: incomplete function definition // _ZN18CraftableCompounds17_registerCompoundERKSt6vectorI19ChemistryIngredientSaIS1_EE12CompoundType20LabTableReactionType21CompoundContainerTypei
//  void _registerCompound(std::vector<ChemistryIngredient> const&, ItemStack const&, LabTableReactionType, CompoundContainerType); //TODO: incomplete function definition // _ZN18CraftableCompounds17_registerCompoundERKSt6vectorI19ChemistryIngredientSaIS1_EERK9ItemStack20LabTableReactionType21CompoundContainerType
};
