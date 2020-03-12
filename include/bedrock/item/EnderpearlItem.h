#pragma once

#include <string>
#include "Item.h"


class EnderpearlItem : Item {

public:
    virtual void getCooldownType()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getCooldownTime()const;
    ~EnderpearlItem();
    virtual bool isThrowable()const;
    EnderpearlItem(std::string const&, int);
};
