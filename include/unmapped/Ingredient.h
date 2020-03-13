#pragma once



namespace PotionBrewing {

    class Ingredient {

    public:
        Ingredient(Item const&, int); // _ZN13PotionBrewing10IngredientC2ERK4Itemi
        Ingredient(ItemInstance const&); // _ZN13PotionBrewing10IngredientC2ERK12ItemInstance
        void equals(ItemDescriptor const&)const; // _ZNK13PotionBrewing10Ingredient6equalsERK14ItemDescriptor
        void getItemId()const; // _ZNK13PotionBrewing10Ingredient9getItemIdEv
        void getData()const; // _ZNK13PotionBrewing10Ingredient7getDataEv
    };
}
