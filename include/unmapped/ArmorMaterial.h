#pragma once



namespace ArmorItem {

class ArmorMaterial {

public:

    ArmorMaterial(int, int, int, int, int, int);
//  void getHealthForSlot(ArmorSlot)const; //TODO: incomplete function definition
//  void getDefenseForSlot(ArmorSlot)const; //TODO: incomplete function definition
    void getEnchantValue()const;
};

}