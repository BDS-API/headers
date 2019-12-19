#pragma once

class EnderpearlItem : Item {

public:
    virtual EnderpearlItem::~EnderpearlItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getCooldownType(void)const;
    virtual void getCooldownTime(void)const;

    EnderpearlItem(std::string const&, int);
};
