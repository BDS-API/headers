#pragma once



using namespace ArmorItem;

class ArmorMaterial {

public:

    ArmorMaterial(int, int, int, int, int, int);
    void getHealthForSlot(ArmorSlot)const;
    void getDefenseForSlot(ArmorSlot)const;
    void getEnchantValue()const;
};
