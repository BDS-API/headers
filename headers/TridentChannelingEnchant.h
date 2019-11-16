#pragma once

class TridentChannelingEnchant : Enchant {

    virtual void TridentChanneling~TridentChannelingEnchant();
    virtual void TridentChanneling~TridentChannelingEnchant();
    virtual void TridentChannelingisCompatibleWith(Enchant::Type)const;
    virtual void TridentChannelinggetMinCost(int)const;
    virtual void TridentChannelinggetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void TridentChannelinggetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
