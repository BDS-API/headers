#pragma once

class EnderEyeItem : Item {

public:
    virtual ~EnderEyeItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;

    void EnderEyeItem(std::string const&, int);
};
