#pragma once

class SnowballItem : Item {

public:
    virtual ~SnowballItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    void SnowballItem(std::string const&, int);
};
