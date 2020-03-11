#pragma once



namespace Item {

class Tier {

public:

    void getUses()const;
    void getAttackDamageBonus()const;
    void getEnchantmentValue()const;
    void getLevel()const;
    Tier(int, int, float, int, int);
    void getSpeed()const;
};

}