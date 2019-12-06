#pragma once

class CraftingDataEntry {

public:

    void CraftingDataEntry(void);
    void CraftingDataEntry(CraftingDataEntry&&);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    void fillFromFurnaceRecipe(int, ItemInstance const&, Util::HashString const&);
    void addFurnaceRecipe(Recipes &)const;
    void fillFromFurnaceAuxRecipe(int, ItemInstance const&, Util::HashString const&);
    void addFurnaceAuxRecipe(Recipes &)const;
    void fillFromRecipe(Recipe const&);
    void fillFromMultiRecipe(MultiRecipe const&);
    void addShapedRecipe(Recipes &)const;
    void addShapelessRecipe(Recipes &)const;
    void addShapedChemistryRecipe(Recipes &)const;
    void addShapelessChemistryRecipe(Recipes &)const;
    void addShulkerBoxRecipe(Recipes &)const;
    void addMultiRecipe(Recipes &)const;
};
