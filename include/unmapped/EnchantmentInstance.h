#pragma once



class EnchantmentInstance {

public:
    EnchantmentInstance(); // _ZN19EnchantmentInstanceC2Ev
//  EnchantmentInstance(Enchant::Type, int); //TODO: incomplete function definition // _ZN19EnchantmentInstanceC2EN7Enchant4TypeEi
    void getEnchantType()const; // _ZNK19EnchantmentInstance14getEnchantTypeEv
//  void setEnchantType(Enchant::Type); //TODO: incomplete function definition // _ZN19EnchantmentInstance14setEnchantTypeEN7Enchant4TypeE
    void getEnchantLevel()const; // _ZNK19EnchantmentInstance15getEnchantLevelEv
    void setEnchantLevel(int); // _ZN19EnchantmentInstance15setEnchantLevelEi
};
