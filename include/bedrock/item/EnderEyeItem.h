#pragma once

class EnderEyeItem : Item {

public:
    virtual EnderEyeItem::~EnderEyeItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;

    EnderEyeItem(std::string const&, int);
};
