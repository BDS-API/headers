#pragma once

#include "./Item.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class EnderEyeItem : Item {

public:
    virtual ~EnderEyeItem();
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;

    EnderEyeItem(std::string const&, int);
};
