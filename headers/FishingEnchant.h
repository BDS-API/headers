#pragma once

class FishingEnchant : Enchant {

    virtual void Fishing~FishingEnchant();
    virtual void Fishing~FishingEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void FishinggetMinCost(int)const;
    virtual void FishinggetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void FishinggetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
