#pragma once

class ArmorItem::ArmorMaterial {

public:

    void ArmorMaterial(int, int, int, int, int, int);
    void getHealthForSlot(ArmorSlot)const;
    void getDefenseForSlot(ArmorSlot)const;
    void getEnchantValue(void)const;
};
