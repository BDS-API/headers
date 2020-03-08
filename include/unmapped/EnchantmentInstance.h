#pragma once



class EnchantmentInstance {

public:

    EnchantmentInstance(void);
    EnchantmentInstance(Enchant::Type, int);
    void getEnchantType()const;
    void setEnchantType(Enchant::Type);
    void getEnchantLevel()const;
    void setEnchantLevel(int);
};
