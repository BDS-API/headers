#pragma once

class TridentLoyaltyEnchant : Enchant {

    virtual void TridentLoyalty~TridentLoyaltyEnchant();
    virtual void TridentLoyalty~TridentLoyaltyEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void TridentLoyaltygetMinCost(int)const;
    virtual void TridentLoyaltygetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void TridentLoyaltygetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
