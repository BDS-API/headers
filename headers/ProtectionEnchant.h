#pragma once

class ProtectionEnchant : Enchant {

    virtual void Protection~ProtectionEnchant();
    virtual void Protection~ProtectionEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void ProtectiongetMinCost(int)const;
    virtual void ProtectiongetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void ProtectiongetMaxLevel(void)const;
    virtual void ProtectiongetDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void ProtectiondoPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void ProtectionisProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
