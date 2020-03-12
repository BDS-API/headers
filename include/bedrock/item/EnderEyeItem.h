#pragma once

#include <string>
#include "Item.h"


class EnderEyeItem : Item {

public:
    virtual bool isThrowable()const;
    ~EnderEyeItem();
    virtual void use(ItemStack &, Player &)const;
    EnderEyeItem(std::string const&, int);
};
