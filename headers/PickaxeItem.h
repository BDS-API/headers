#pragma once

class PickaxeItem : DiggerItem {

public:
    virtual ~PickaxeItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;

    void PickaxeItem(std::string const&, int, Item::Tier const&);
};
