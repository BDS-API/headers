#pragma once

#include "../bedrock/item/ItemInstance.h"


class ChemistryIngredient {

public:
    ChemistryIngredient(ItemInstance const&);
    ChemistryIngredient(ChemistryIngredient const&);
    ~ChemistryIngredient();
//  ChemistryIngredient(ElementType, int); //TODO: incomplete function definition
//  ChemistryIngredient(CompoundType, int); //TODO: incomplete function definition
};
