#pragma once

#include "../actor/Player"


class EnderpearlItem : Item {

public:
    virtual EnderpearlItem::~EnderpearlItem()
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getCooldownType()const;
    virtual void getCooldownTime()const;

    EnderpearlItem(std::string const&, int);
};
