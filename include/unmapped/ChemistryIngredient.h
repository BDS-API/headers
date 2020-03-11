#pragma once

#include "./ChemistryIngredient.h"
#include "../bedrock/item/ItemInstance.h"


class ChemistryIngredient {

public:

    ~ChemistryIngredient();
    ChemistryIngredient(ChemistryIngredient const&);
//  ChemistryIngredient(ElementType, int); //TODO: incomplete function definition
//  ChemistryIngredient(CompoundType, int); //TODO: incomplete function definition
    ChemistryIngredient(ItemInstance const&);
};
