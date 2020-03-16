#pragma once

#include <memory>
#include <string>
#include "ShapelessRecipe.h"
#include <vector>


class ShapelessChemistryRecipe : public ShapelessRecipe {

public:
    static long ID;

    virtual ~ShapelessChemistryRecipe(); // _ZN24ShapelessChemistryRecipeD2Ev
    virtual void __fake_function0(); // fake
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK24ShapelessChemistryRecipe7matchesER17CraftingContainerR5Level
    virtual void getId()const; // _ZNK24ShapelessChemistryRecipe5getIdEv
    ShapelessChemistryRecipe(ShapelessChemistryRecipe &&); // _ZN24ShapelessChemistryRecipeC2EOS_
    void construct(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>); // _ZN24ShapelessChemistryRecipe9constructENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI16RecipeIngredientSaIS7_EERKS6_I12ItemInstanceSaISC_EEN4Util10HashStringEi
};
