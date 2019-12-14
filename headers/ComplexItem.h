#pragma once

class ComplexItem : Item {

public:
    virtual ~ComplexItem();
    virtual bool isComplex(void)const;
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;

    void ComplexItem(std::string const&, int);
};
