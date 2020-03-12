#pragma once

#include "HashString.h"
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "../bedrock/crafting/recipe/MultiRecipe.h"
#include "Recipes.h"
#include "../bedrock/crafting/recipe/Recipe.h"
#include "../bedrock/io/BinaryStream.h"


class CraftingDataEntry {

public:
    void fillFromFurnaceRecipe(int, ItemInstance const&, Util::HashString const&);
    void addShapedChemistryRecipe(Recipes &)const;
    void addShapelessChemistryRecipe(Recipes &)const;
    void fillFromMultiRecipe(MultiRecipe const&);
    void addFurnaceAuxRecipe(Recipes &)const;
    void read(ReadOnlyBinaryStream &);
    void addShapedRecipe(Recipes &)const;
    void addShulkerBoxRecipe(Recipes &)const;
    void addFurnaceRecipe(Recipes &)const;
    CraftingDataEntry(CraftingDataEntry &&);
    void addMultiRecipe(Recipes &)const;
    void fillFromFurnaceAuxRecipe(int, ItemInstance const&, Util::HashString const&);
    void fillFromRecipe(Recipe const&);
    CraftingDataEntry();
    void addShapelessRecipe(Recipes &)const;
    ~CraftingDataEntry();
    void write(BinaryStream &)const;
};
