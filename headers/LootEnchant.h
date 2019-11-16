#pragma once

class LootEnchant : Enchant {

    virtual void Loot~LootEnchant();
    virtual void Loot~LootEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void LootgetMinCost(int)const;
    virtual void LootgetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void LootgetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
