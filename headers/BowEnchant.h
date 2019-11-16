#pragma once

class BowEnchant : Enchant {

    virtual void Bow~BowEnchant();
    virtual void Bow~BowEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void BowgetMinCost(int)const;
    virtual void BowgetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void BowgetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
