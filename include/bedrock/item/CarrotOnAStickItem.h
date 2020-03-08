#pragma once



class CarrotOnAStickItem : Item {

public:
    virtual CarrotOnAStickItem::~CarrotOnAStickItem();
    virtual bool isHandEquipped(void)const;
    virtual bool requiresInteract(void)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;

    CarrotOnAStickItem(std::string const&, int);
};
