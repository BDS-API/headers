#pragma once



class EnchantmentInstance {

public:

    EnchantmentInstance();
//  EnchantmentInstance(Enchant::Type, int); //TODO: incomplete function definition
    void getEnchantType()const;
//  void setEnchantType(Enchant::Type); //TODO: incomplete function definition
    void getEnchantLevel()const;
    void setEnchantLevel(int);
};
