#pragma once

#include "./Item.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class EnderpearlItem : Item {

public:
    virtual ~EnderpearlItem();
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getCooldownType()const;
    virtual void getCooldownTime()const;

    EnderpearlItem(std::string const&, int);
};
