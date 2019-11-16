#pragma once

class MeleeWeaponEnchant : Enchant {

    virtual void MeleeWeapon~MeleeWeaponEnchant();
    virtual void MeleeWeapon~MeleeWeaponEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void MeleeWeapongetMinCost(int)const;
    virtual void MeleeWeapongetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void MeleeWeapongetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void MeleeWeapongetDamageBonus(int, Actor const&)const;
    virtual void MeleeWeapondoPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void MeleeWeaponisMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
