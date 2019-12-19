#pragma once

using namespace PotionBrewing;

class Ingredient {

public:

    Ingredient(Item const&, int);
    Ingredient(ItemInstance const&);
    void equals(ItemDescriptor const&)const;
    void getItemId(void)const;
    void getData(void)const;
};
