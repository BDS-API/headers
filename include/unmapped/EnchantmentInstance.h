#pragma once



class EnchantmentInstance {

public:
//  void setEnchantType(Enchant::Type); //TODO: incomplete function definition
    void setEnchantLevel(int);
//  EnchantmentInstance(Enchant::Type, int); //TODO: incomplete function definition
    void getEnchantLevel()const;
    EnchantmentInstance();
    void getEnchantType()const;
};
