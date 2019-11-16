#pragma once

class CrossbowEnchant : Enchant {

    virtual void Crossbow~CrossbowEnchant();
    virtual void Crossbow~CrossbowEnchant();
    virtual void CrossbowisCompatibleWith(Enchant::Type)const;
    virtual void CrossbowgetMinCost(int)const;
    virtual void CrossbowgetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void CrossbowgetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
