#pragma once

class TridentRiptideEnchant : Enchant {

    virtual void TridentRiptide~TridentRiptideEnchant();
    virtual void TridentRiptide~TridentRiptideEnchant();
    virtual void TridentRiptideisCompatibleWith(Enchant::Type)const;
    virtual void TridentRiptidegetMinCost(int)const;
    virtual void TridentRiptidegetMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void TridentRiptidegetMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}
