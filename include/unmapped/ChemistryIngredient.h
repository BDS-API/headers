#pragma once



class ChemistryIngredient {

public:
//  ChemistryIngredient(CompoundType, int); //TODO: incomplete function definition
    ~ChemistryIngredient();
    ChemistryIngredient(ChemistryIngredient const&);
//  ChemistryIngredient(ElementType, int); //TODO: incomplete function definition
    ChemistryIngredient(ItemInstance const&);
};
