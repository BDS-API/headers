#pragma once



class ComplexItem : Item {

public:
    virtual ComplexItem::~ComplexItem();
    virtual bool isComplex(void)const;
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;

    ComplexItem(std::string const&, int);
};
