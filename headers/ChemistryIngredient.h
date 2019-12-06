#pragma once

class ChemistryIngredient {

public:

    void ChemistryIngredient(ChemistryIngredient const&);
    void ChemistryIngredient(ElementType, int);
    void ChemistryIngredient(CompoundType, int);
    void ChemistryIngredient(ItemInstance const&);
};
