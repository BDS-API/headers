#pragma once

#include "../actor/Player"


class EnderEyeItem : Item {

public:
    virtual EnderEyeItem::~EnderEyeItem()
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;

    EnderEyeItem(std::string const&, int);
};
