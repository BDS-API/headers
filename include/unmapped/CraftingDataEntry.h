#pragma once



class CraftingDataEntry {

public:
    ~CraftingDataEntry(); // _ZN17CraftingDataEntryD2Ev
    CraftingDataEntry(); // _ZN17CraftingDataEntryC2Ev
    CraftingDataEntry(CraftingDataEntry &&); // _ZN17CraftingDataEntryC2EOS_
    void write(BinaryStream &)const; // _ZNK17CraftingDataEntry5writeER12BinaryStream
    void read(ReadOnlyBinaryStream &); // _ZN17CraftingDataEntry4readER20ReadOnlyBinaryStream
    void fillFromFurnaceRecipe(int, ItemInstance const&, Util::HashString const&); // _ZN17CraftingDataEntry21fillFromFurnaceRecipeEiRK12ItemInstanceRKN4Util10HashStringE
    void addFurnaceRecipe(Recipes &)const; // _ZNK17CraftingDataEntry16addFurnaceRecipeER7Recipes
    void fillFromFurnaceAuxRecipe(int, ItemInstance const&, Util::HashString const&); // _ZN17CraftingDataEntry24fillFromFurnaceAuxRecipeEiRK12ItemInstanceRKN4Util10HashStringE
    void addFurnaceAuxRecipe(Recipes &)const; // _ZNK17CraftingDataEntry19addFurnaceAuxRecipeER7Recipes
    void fillFromRecipe(Recipe const&); // _ZN17CraftingDataEntry14fillFromRecipeERK6Recipe
    void fillFromMultiRecipe(MultiRecipe const&); // _ZN17CraftingDataEntry19fillFromMultiRecipeERK11MultiRecipe
    void addShapedRecipe(Recipes &)const; // _ZNK17CraftingDataEntry15addShapedRecipeER7Recipes
    void addShapelessRecipe(Recipes &)const; // _ZNK17CraftingDataEntry18addShapelessRecipeER7Recipes
    void addShapedChemistryRecipe(Recipes &)const; // _ZNK17CraftingDataEntry24addShapedChemistryRecipeER7Recipes
    void addShapelessChemistryRecipe(Recipes &)const; // _ZNK17CraftingDataEntry27addShapelessChemistryRecipeER7Recipes
    void addShulkerBoxRecipe(Recipes &)const; // _ZNK17CraftingDataEntry19addShulkerBoxRecipeER7Recipes
    void addMultiRecipe(Recipes &)const; // _ZNK17CraftingDataEntry14addMultiRecipeER7Recipes
};
