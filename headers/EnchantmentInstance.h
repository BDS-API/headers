#pragma once

class EnchantmentInstance {

public:

    void EnchantmentInstance(void);
    void EnchantmentInstance(Enchant::Type, int);
    void getEnchantType(void)const;
    void setEnchantType(Enchant::Type);
    void getEnchantLevel(void)const;
    void setEnchantLevel(int);
};
