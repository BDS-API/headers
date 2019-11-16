#pragma once

class DiggingEnchant : Enchant {

    virtual void Digging~DiggingEnchant();
    virtual void Digging~DiggingEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void DigginggetMinCost(int)const;
    virtual void DigginggetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void DigginggetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
