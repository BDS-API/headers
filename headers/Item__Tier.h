#pragma once

class Item::Tier {

public:

    void getUses(void)const;
    void getAttackDamageBonus(void)const;
    void getEnchantmentValue(void)const;
    void getLevel(void)const;
    void Tier(int, int, float, int, int);
    void getSpeed(void)const;
};
