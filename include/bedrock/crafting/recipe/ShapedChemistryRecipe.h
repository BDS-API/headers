#pragma once

#include <string>
#include <memory>
#include <vector>
#include "ShapedRecipe.h"


class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ID;

    ~ShapedChemistryRecipe(); // _ZN21ShapedChemistryRecipeD2Ev
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK21ShapedChemistryRecipe7matchesER17CraftingContainerR5Level
    virtual void getId()const; // _ZNK21ShapedChemistryRecipe5getIdEv
    ShapedChemistryRecipe(ShapedChemistryRecipe &&); // _ZN21ShapedChemistryRecipeC2EOS_
    void construct(std::string, int, int, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>); // _ZN21ShapedChemistryRecipe9constructENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiRKSt6vectorI16RecipeIngredientSaIS7_EERKS6_I12ItemInstanceSaISC_EEN4Util10HashStringE
};
