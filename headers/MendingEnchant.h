#pragma once

class MendingEnchant : Enchant {

    virtual void Mending~MendingEnchant();
    virtual void Mending~MendingEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void MendinggetMinCost(int)const;
    virtual void MendinggetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void MendinggetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void MendingisTreasureOnly(void)const;
}
