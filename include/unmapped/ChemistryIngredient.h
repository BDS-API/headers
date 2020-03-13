#pragma once



class ChemistryIngredient {

public:
    ~ChemistryIngredient(); // _ZN19ChemistryIngredientD2Ev
    ChemistryIngredient(ChemistryIngredient const&); // _ZN19ChemistryIngredientC2ERKS_
//  ChemistryIngredient(ElementType, int); //TODO: incomplete function definition // _ZN19ChemistryIngredientC2E11ElementTypei
//  ChemistryIngredient(CompoundType, int); //TODO: incomplete function definition // _ZN19ChemistryIngredientC2E12CompoundTypei
    ChemistryIngredient(ItemInstance const&); // _ZN19ChemistryIngredientC2ERK12ItemInstance
};
