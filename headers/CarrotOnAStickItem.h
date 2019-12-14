#pragma once

class CarrotOnAStickItem : Item {

public:
    virtual ~CarrotOnAStickItem();
    virtual bool isHandEquipped(void)const;
    virtual void requiresInteract(void)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;

    void CarrotOnAStickItem(std::string const&, int);
};
