#pragma once



namespace PotionBrewing {

    class Ingredient {

    public:
        void getItemId()const;
        Ingredient(ItemInstance const&);
        void getData()const;
        Ingredient(Item const&, int);
        void equals(ItemDescriptor const&)const;
    };
}
