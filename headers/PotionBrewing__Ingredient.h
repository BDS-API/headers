#pragma once

class PotionBrewing::Ingredient {

public:

    void Ingredient(Item const&, int);
    void Ingredient(ItemInstance const&);
    void equals(ItemDescriptor const&)const;
    void getItemId(void)const;
    void getData(void)const;
};
