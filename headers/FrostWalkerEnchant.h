#pragma once

class FrostWalkerEnchant : Enchant {

    virtual void FrostWalker~FrostWalkerEnchant();
    virtual void FrostWalker~FrostWalkerEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void FrostWalkergetMinCost(int)const;
    virtual void FrostWalkergetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void FrostWalkergetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void FrostWalkerisTreasureOnly(void)const;
}
