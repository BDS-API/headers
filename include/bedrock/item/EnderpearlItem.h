#pragma once

#include "Item.h"
#include <string>
#include "../actor/Player.h"
#include "ItemStack.h"


class EnderpearlItem : Item {

public:
    virtual bool isThrowable()const;
    virtual void getCooldownType()const;
    virtual void use(ItemStack &, Player &)const;
    ~EnderpearlItem();
    virtual void getCooldownTime()const;
    EnderpearlItem(std::string const&, int);
};
