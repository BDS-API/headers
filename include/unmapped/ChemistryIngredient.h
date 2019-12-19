#pragma once

class ChemistryIngredient {

public:

    ChemistryIngredient(ChemistryIngredient const&);
    ChemistryIngredient(ElementType, int);
    ChemistryIngredient(CompoundType, int);
    ChemistryIngredient(ItemInstance const&);
};
