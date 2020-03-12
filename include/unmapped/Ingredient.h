#pragma once

#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/item/Item.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"


namespace PotionBrewing {

    class Ingredient {

    public:
        Ingredient(Item const&, int);
        void equals(ItemDescriptor const&)const;
        Ingredient(ItemInstance const&);
        void getData()const;
        void getItemId()const;
    };
}
