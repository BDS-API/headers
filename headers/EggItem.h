#pragma once

class EggItem : Item {

public:
    virtual ~EggItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    void EggItem(std::string const&, int);
};
