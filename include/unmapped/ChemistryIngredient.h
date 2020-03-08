#pragma once

#include "../bedrock/item/ItemInstance"


class ChemistryIngredient {

public:

    ChemistryIngredient(ChemistryIngredient const&);
    ChemistryIngredient(ElementType, int);
    ChemistryIngredient(CompoundType, int);
    ChemistryIngredient(ItemInstance const&);
};
