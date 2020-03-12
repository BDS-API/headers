#pragma once

#include "Item.h"
#include <string>
#include "../actor/Player.h"
#include "ItemStack.h"


class EnderEyeItem : Item {

public:
    virtual void use(ItemStack &, Player &)const;
    virtual bool isThrowable()const;
    ~EnderEyeItem();
    EnderEyeItem(std::string const&, int);
};
