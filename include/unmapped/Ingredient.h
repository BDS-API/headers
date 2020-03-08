#pragma once

#include "../bedrock/item/Item"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/item/unmapped/ItemDescriptor"


using namespace PotionBrewing;

class Ingredient {

public:

    Ingredient(Item const&, int);
    Ingredient(ItemInstance const&);
    void equals(ItemDescriptor const&)const;
    void getItemId()const;
    void getData()const;
};
