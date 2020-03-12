#pragma once



class CraftingDataEntry {

public:
    ~CraftingDataEntry();
    void read(ReadOnlyBinaryStream &);
    void addFurnaceAuxRecipe(Recipes &)const;
    void addShulkerBoxRecipe(Recipes &)const;
    CraftingDataEntry();
    void addShapedChemistryRecipe(Recipes &)const;
    void addFurnaceRecipe(Recipes &)const;
    void addShapedRecipe(Recipes &)const;
    void fillFromFurnaceRecipe(int, ItemInstance const&, Util::HashString const&);
    void addShapelessRecipe(Recipes &)const;
    void addShapelessChemistryRecipe(Recipes &)const;
    CraftingDataEntry(CraftingDataEntry &&);
    void addMultiRecipe(Recipes &)const;
    void fillFromRecipe(Recipe const&);
    void fillFromFurnaceAuxRecipe(int, ItemInstance const&, Util::HashString const&);
    void fillFromMultiRecipe(MultiRecipe const&);
    void write(BinaryStream &)const;
};
