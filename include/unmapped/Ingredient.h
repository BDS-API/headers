#pragma once

#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/item/Item.h"


namespace PotionBrewing {

class Ingredient {

public:

    Ingredient(Item const&, int);
    Ingredient(ItemInstance const&);
    void equals(ItemDescriptor const&)const;
    void getItemId()const;
    void getData()const;
};

}