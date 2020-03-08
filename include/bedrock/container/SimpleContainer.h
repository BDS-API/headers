#pragma once

#include "../item/ItemStack"
#include "../actor/Player"


class SimpleContainer : Container {

public:
    SimpleContainer::~SimpleContainer()
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    SimpleContainer(std::string const&, bool, int, ContainerType);
    void clearContent();
};
