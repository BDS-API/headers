#pragma once

#include <vector>


class BlockReducer {

public:
    ~BlockReducer(); // _ZN12BlockReducerD2Ev
    virtual void _registerBlock(ItemStack const&, std::vector<ItemStack> &&); // _ZN12BlockReducer14_registerBlockERK9ItemStackOSt6vectorIS0_SaIS0_EE
    BlockReducer(); // _ZN12BlockReducerC2Ev
    void getReduction(ItemInstance const&); // _ZN12BlockReducer12getReductionERK12ItemInstance
    void _getBlockKey(ItemDescriptor const&); // _ZN12BlockReducer12_getBlockKeyERK14ItemDescriptor
    void registerBlocks(); // _ZN12BlockReducer14registerBlocksEv
    void _registerBlock(ItemStack const&, std::vector<ChemistryIngredient> const&); // _ZN12BlockReducer14_registerBlockERK9ItemStackRKSt6vectorI19ChemistryIngredientSaIS4_EE
};
