#pragma once

class TridentImpalerEnchant : Enchant {

    virtual void TridentImpaler~TridentImpalerEnchant();
    virtual void TridentImpaler~TridentImpalerEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void TridentImpalergetMinCost(int)const;
    virtual void TridentImpalergetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void TridentImpalergetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void TridentImpalergetDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
