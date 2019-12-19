#pragma once

class EnchantmentInstance {

public:

    EnchantmentInstance(void);
    EnchantmentInstance(Enchant::Type, int);
    void getEnchantType(void)const;
    void setEnchantType(Enchant::Type);
    void getEnchantLevel(void)const;
    void setEnchantLevel(int);
};
