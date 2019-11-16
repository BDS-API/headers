#pragma once

class SwimEnchant : Enchant {

    virtual void Swim~SwimEnchant();
    virtual void Swim~SwimEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void SwimgetMinCost(int)const;
    virtual void SwimgetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void SwimgetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
